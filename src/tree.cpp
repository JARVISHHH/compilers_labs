#include "tree.h"

extern int lineno;  // 当前行号
extern symbol_table symtbl;  // 符号表

tree parse_tree;  // 解析树

// 构造函数
Node::Node()
{
	;
}

Node::Node(int lineno, int kind, int kind_kind, NodeAttr NA, int type, int seq)
{
	this->lineno = lineno;
	this->kind = kind;
	this->kind_kind = kind_kind;
	this->attr = NA;
	this->type = type;
	this->seq = seq;
}

// 输出树的信息
void Node::output(void)
{
	// write your own code to print the parser tree
	cout << endl;
}

// 添加孩子结点
void Node::addChild(Node* child) {
	if(child == nullptr) return;
	int i = 0;
	Node* cur = child;
	for(; this->children[i] != nullptr && i < MAX_CHILDREN; i++);
	if(i < MAX_CHILDREN)
	{
		this->children[i] = cur;
		this->children[0]->addSibling(cur);
		cur = cur->sibling;
		i++;
	}
	for(; i < MAX_CHILDREN && cur != nullptr; cur = cur->sibling, i++)
	{
		this->children[i] = cur;
	}
}

// 增加兄弟节点
void Node::addSibling(Node* sibling){
	if(this == sibling) return;
    Node* cur = this;
    // 循环找到链表的尾部
    while(cur->sibling != nullptr)
        cur = cur->sibling;
    cur->sibling = sibling;
}

// 类型检查
void tree::type_check(Node *t)
{
	// type check, write your own code here

	// 如果当前节点是语句节点
	if (t->kind == STMT_NODE)
	{
		switch(t->kind_kind)
		{
		case COMP_STMT:
			for(int i = 0; t->children[i]; i++)
				type_check(t->children[i]);
			break;
		case WHILE_STMT:
			type_check(t->children[0]);
			// 如果孩子节点(也就是循环判断语句)不是布尔型的，类型错误
			if (t->children[0]->type != Boolean)
			{
				cerr << "Bad boolean type at line: " << t->lineno << endl;
			}
			else
			{
				type_check(t->children[1]);
				return;
			}
			break;
		case FOR_STMT:
			type_check(t->children[0]);
			type_check(t->children[1]);
			// 如果循环判断语句不是布尔型的，类型错误
			if(t->children[1]->type != Boolean)
			{
				cerr << "Bad boolean type at line: " << t->lineno << endl;
			}
			else
			{
				type_check(t->children[2]);
				type_check(t->children[3]);
				return;
			}
			break;
		case IF_STMT:
			type_check(t->children[0]);
			// 如果判断语句不是布尔型的，类型错误
			if(t->children[0]->type != Boolean)
			{
				cerr << "Bad boolean type at line: " << t->lineno << endl;
			}
			else
			{
				type_check(t->children[1]);
				return;
			}
			break;
		case RETURN_STMT:
			return;
		case PRINT_STMT:
			return;
		case SCAN_STMT:
			return;
		}
	}
	else if(t->kind == EXPR_NODE)
	{
		if(t->kind_kind == OP_EXPR)
		{
			type_check(t->children[0]);
			if(t->children[1])
				type_check(t->children[1]);
			switch(t->attr.op)
			{
			case OP_ASSIGN:
				if(t->children[0]->type != t->children[1]->type)
					cerr << "Bad type at line: " << t->lineno << endl;
				t->type = t->children[0]->type;
				break;
			case OP_EQ:
				// if(t->children[0]->type != t->children[1]->type)
				// 	cerr << "Bad type at line: " << t->lineno << endl;
				t->type = Boolean;
				break;
			case OP_NOT:
				t->type = Boolean;
				break;
			case OP_DPLUS:
				if(t->children[0]->type != Integer)
					cerr << "Bad integer type at line: " << t->lineno << endl;
				t->type = Integer;
				break;
			case OP_DMINUS:
				if(t->children[0]->type != Integer)
					cerr << "Bad integer type at line: " << t->lineno << endl;
				t->type = Integer;
				break;
			default:
				if(t->children[0]->type != Integer || (t->children[1] != nullptr && t->children[1]->type != Integer))
					cerr << "Bad integer type at line: " << t->lineno << endl;
				// t->type = Integer;
			}
		}
	}
	/* ... */
	return;
}

// 获得临时变量
void tree::get_temp_var(Node *t)
{
	// 如果节点不是表达式节点（不需要临时变量），就退出
	if (t->kind != EXPR_NODE)
		return;
	// 如果节点的表达式不在枚举范围内，返回
	// if (t->attr.op < PLUS || t->attr.op > OVER)
	// 	return;
	if (t->attr.op < OP_DOT || t->attr.op > OP_COMMA)
		return;

	// Node *arg1 = t->children[0];  // 获得第一个运算量
	// Node *arg2 = t->children[1];  // 获得第二个运算量

	// 参加运算的临时变量，一定是序号最大的临时变量吗？
	// 如果参数1的类型是运算表达式，说明参加运算的是临时变量
	// if (arg1->kind_kind == OP_EXPR)
	// 	temp_var_seq--;  // 临时变量的序号-1
	// 如果参数2存在且参数2的类型是运算表达式，说明有临时变量参加运算
	// if (arg2 && arg2->kind_kind == OP_EXPR)
	// 	tree::temp_var_seq--;  // 临时变量的序号-1
	t->temp_var = tree::temp_var_seq;  // t的临时变量是类的临时变量序号
	tree::temp_var_seq++;  // 临时变量的数量+1
}

// 应该是从下而上建树？
// 生成新根，从根开始遍历
Node* tree::NewRoot(int kind, int kind_kind, NodeAttr attr, int type, Node* child, int this_lineno)
				//    Node *child1, Node *child2, Node *child3, Node *child4)
{
	Node *t = new Node;  // 创建新的Node
	
	// 如果t为空，没有可用内存
	if (NULL == t)
		cerr << "Out of memory at line %d\n" << lineno;
	else
	{
		t->kind = kind;
		t->kind_kind = kind_kind;
		t->attr = attr;
		t->type = type;
		t->addChild(child);
		t->lineno = this_lineno;
		t->seq = tree::node_seq++;
		t->sibling = NULL;
		// 刚创建根，所有标签都为空
		t->label.begin_label = "";
		t->label.next_label = "";
		t->label.true_label = "";
		t->label.false_label = "";
		root = t;  // 令根为t
		type_check(t); // type check   进行类型检查
		get_temp_var(t); // generate temp veriables   生成临时变量
	}
	return t;
}

// 生成新的标签
string tree::new_label(void)
{
	char tmp[20];

	sprintf(tmp, ".L%d", tree::label_seq);  // 将tree::label_seq的值给tmp
	tree::label_seq++;  // 树的标签序号增加1
	return tmp;  // 返回新生成的标签
}

// 语句获得标签
void tree::stmt_get_label(Node *t)
{
	// 根据节点所属的具体类型来生成标签
	switch (t->kind_kind)
	{
	// 复合语句
	case COMP_STMT:
		{
			Node *last;  // 最后的节点
			Node *p = t->children[0];  // 临时变量，标识
			// 跳过所有的声明节点
			// for (p = t->children[0]; p != nullptr && p->kind == DECL_NODE; p = p->sibling) ;
			if(p == nullptr) return;
			// 现在p是语句节点或者表达式节点
			p->label.begin_label = t->label.begin_label;  // p的开始节点等于t的开始节点（有就有，没有就没有）
			// 遍历复合语句中的所有节点，获得所有节点的标签
			for (; p; p = p->sibling)
			{
				last = p;  // 更新最后的节点
				recursive_get_label(p);  // 递归获得p的标签
			}
			// 整体的下一个标签等于最后的下一个标签
			t->label.next_label = last->label.next_label;
			// 如果t有兄弟
			if (t->sibling)
				// t的兄弟的开始标签等于t的下一个标签
				t->sibling->label.begin_label = t->label.next_label;
		}
		break;
	// 循环语句
	case WHILE_STMT:
		{
			Node *e = t->children[0];  // 第一个孩子(判断条件)
			Node *s = t->children[1];  // 第二个孩子(循环体)

			// 如果循环语句的开始标签为空，则新建一个开始标签（难道不是必定为空吗？）
			if (t->label.begin_label == "")
				t->label.begin_label = new_label();
			s->label.next_label = t->label.begin_label;  // 循环体作为整体（即循环体全部运行结束后）的下一句就是循环语句的开始

			// 新建循环体的开始标签和判断条件的真值标签
			s->label.begin_label = e->label.true_label = new_label();

			// 如果循环语句的下一个标签为空，则新建标签
			if (t->label.next_label == "")
				t->label.next_label = new_label();
			// 判断条件为假时，标签为循环语句的下一标签
			e->label.false_label = t->label.next_label;
			// 如果t有兄弟（即还有下一个语句块），那么这个语句块的开始标签就是t的下一个标签
			if (t->sibling)
				t->sibling->label.begin_label = t->label.next_label;
			// 递归获得两个孩子的标签
			recursive_get_label(e);
			recursive_get_label(s);
			break;
		}
	case IF_STMT:
		{
			Node *e = t->children[0];  // 第一个孩子(判断条件)
			Node *s = t->children[1];  // 第二个孩子(循环体)

			// 新建循环体的开始标签和判断条件的真值标签
			// s->label.begin_label = e->label.true_label = new_label();

			// 如果循环语句的下一个标签为空，则新建标签
			if (t->label.next_label == "")
				t->label.next_label = new_label();
			// 判断条件为假时，标签为循环语句的下一标签
			e->label.false_label = t->label.next_label;
			s->label.next_label = t->label.next_label;  // 循环体作为整体（即循环体全部运行结束后）的下一句就是循环语句的开始
			// 如果t有兄弟（即还有下一个语句块），那么这个语句块的开始标签就是t的下一个标签
			if (t->sibling)
				t->sibling->label.begin_label = t->label.next_label;
			// 递归获得两个孩子的标签
			recursive_get_label(e);
			recursive_get_label(s);
			break;
		}
    /* ... */
	}
}

// 表达式获得标签
void tree::expr_get_label(Node *t)
{
	// 如果节点的类型不是布尔型，则跳过
	if (t->type != Boolean)
		return;

	Node *e1 = t->children[0];  // 运算数1
	Node *e2 = t->children[1];  // 运算数2
	// 根据操作符来确定操作
	switch (t->attr.op)
	{
	// 与运算
	case OP_AND:
		// 运算符为1时生成的标签是要干什么。
		e1->label.true_label = new_label();  // 是真值时创建新的标签
		e2->label.true_label = t->label.true_label;  // 运算符2真值的标签等于表达式真值的标签
		e1->label.false_label = e2->label.false_label = t->label.false_label;  // 其中任意一个假的标签都是相同的
		break;

	case OP_OR:
		break;
    /* ... */
	}

	// 对运算数，递归生成标签
	if (e1)
		recursive_get_label(e1);
	if (e2)
		recursive_get_label(e2);
}

void tree::decl_get_label(Node *t)
{
	switch(t->kind_kind)
	{
	case FUNC_DECL:
		t->label.begin_label = t->children[1]->attr.name;
		if(t->children[2]->kind == LIST_NODE)
			recursive_get_label(t->children[3]);
		else
			recursive_get_label(t->children[2]);
		break;
		
	}
}

// 递归生成标签
void tree::recursive_get_label(Node *t)
{
	// 如果是语句，就语句获得标签
	if (t->kind == STMT_NODE)
		stmt_get_label(t);
	// 如果是表达式，就表达式获得标签
	else if (t->kind == EXPR_NODE)
		expr_get_label(t);
	else if (t->kind == DECL_NODE)
		decl_get_label(t);
}

// 生成标签
void tree::get_label(void)
{
	Node *p = root;
	// 从根开始递归生成标签。是自顶向下的过程。
	recursive_get_label(p);
}

// 生成asm头部
void tree::gen_header(ostream &out)
{
	out << "# your asm code header here" << endl;
	/*your code here*/
}

// 生成声明的asm码
void tree::gen_decl(ostream &out)
{
    out << endl << "# define your veriables and temp veriables here" << endl;
	out << "\t.section .rodata" << endl;
	if(symtbl.table.count(print_content) > 0)
	{
		for(int i = 0; i < int(symtbl.table[print_content].size()); i++)
		{
			out << print_content << i << ":" << endl;
			out << "\t.string\t" << symtbl.table[print_content][i].content << endl;
		}
	}
	if(symtbl.table.count(scan_content) > 0)
	{
		for(int i = 0; i < int(symtbl.table[scan_content].size()); i++)
		{
			out << scan_content << i << ":" << endl;
			out << "\t.string\t" << symtbl.table[scan_content][i].content << endl;
		}
	}
	if(symtbl.table.count(const_content) > 0)
	{
		for(int i = 0; i < int(symtbl.table[const_content].size()); i++)
		{
			out << const_content << i << ":" << endl;
			out << "\t.string\t" << symtbl.table[const_content][i].content << endl;
		}
	}
	out << "\t.bss" << endl;

	for(symtbl.iter = symtbl.table.begin(); symtbl.iter != symtbl.table.end(); symtbl.iter++)
	{
		// out<<symtbl.iter->first<<endl;
		for(int i = 0; i < int(symtbl.table[symtbl.iter->first].size()); i++)
		{
			// out << symtbl.table[symtbl.iter->first][i].type << endl;
			switch(symtbl.table[symtbl.iter->first][i].type)
			{
			case Integer:
				out << "_" << symtbl.iter->first << i << ":" << endl;
				out << "\t.zero\t4" << endl;
				out << "\t.align\t4" << endl;
				break;
			}
		}
	}

	// 创建临时变量空间
	for (int i = 0; i < max_temp; i++)
	{
		out << "t" <<  i << ":" << endl;
        out << "\t.zero\t4" << endl;
        out << "\t.align\t4" << endl;
	}
}

// 生成语句的asm码
void tree::stmt_gen_code(ostream &out, Node *t)
{
	// 如果是个符复合语句
	if (t->kind_kind == COMP_STMT)
	{
		// 遍历所有的孩子节点
		for (int i = 0; t->children[i]; i++)
		{
			// 递归生成当前孩子的代码
			recursive_gen_code(out, t->children[i]);
		}
		return;
	}
	if (t->label.begin_label != "")
			out << t->label.begin_label << ":" << endl;
	// 如果是个while循环语句
	if (t->kind_kind == WHILE_STMT)
	{
		// if (t->label.begin_label != "")
		// 	out << t->label.begin_label << ":" << endl;
		recursive_gen_code(out, t->children[0]);  // 递归生成循环条件的asm码
		recursive_gen_code(out, t->children[1]);  // 递归生成循环体的asm码
		// 跳回到循环开始的地方(while...)
		out << "\tjmp " << t->label.begin_label << endl;
	}
	else if (t->kind_kind == IF_STMT)
	{
		// if (t->label.begin_label != "")
		// 	out << t->label.begin_label << ":" << endl;
		recursive_gen_code(out, t->children[0]);  // 递归生成条件的asm码
		recursive_gen_code(out, t->children[1]);  // 递归生成语句体的asm码
	}
	// 如果是个print语句
	else if (t->kind_kind == PRINT_STMT)
	{
		Node* p = t->children[0];
		if(t->children[0]->kind == LIST_NODE)
		{
			p = t->children[0];
			int i = 0, sum = 0;
			for(; i < MAX_ID && p->children[i]; i++);
			for(i = i - 1 ; i >= 0 ; i--)
			{
				recursive_gen_code(out, p->children[i]);
				if(p->children[i]->kind_kind == ID_EXPR)
				{
					out << "\tmovl ";
					out << "_" << p->children[i]->attr.name << p->children[i]->attr.symtbl_seq;
					out << ", %eax" << endl;
					out << "\tpushl %eax" << endl;
				}
				else if (p->children[i]->kind_kind == CONST_EXPR)
				{
					out << "\tpushl $";
					out << p->children[i]->attr.vali << endl;
				}
				else
				{
					out << "\tmovl ";
					out << "t" << p->children[i]->temp_var;
					out << ", %eax" << endl;
					out << "\tpushl %eax" << endl;
				}
				switch(p->children[i]->type)
				{
				case Boolean:
					sum += 1;
					break;
				case Char:
					sum += 1;
					break;
				default:
					sum += 4;
					break;
				}
			}
			out << "\tcall printf" << endl;
			out << "\taddl $" << sum << ", %esp" << endl;
		}
		else if(t->children[0]->kind == EXPR_NODE && t->children[1] && t->children[1]->kind == LIST_NODE)
		{
			p = t->children[1];
			int i = 0, sum = 0;
			for(; i < MAX_ID && p->children[i]; i++);
			for(i = i - 1 ; i >= 0 ; i--)
			{
				recursive_gen_code(out, p->children[i]);
				if(p->children[i]->kind_kind == ID_EXPR)
				{
					out << "\tmovl ";
					out << "_" << p->children[i]->attr.name << p->children[i]->attr.symtbl_seq;
					out << ", %eax" << endl;
					out << "\tpushl %eax" << endl;
				}
				else if (p->children[i]->kind_kind == CONST_EXPR)
				{
					out << "\tpushl $";
					out << p->children[i]->attr.vali << endl;
				}
				else
				{
					out << "\tmovl ";
					out << "t" << p->children[i]->temp_var;
					out << ", %eax" << endl;
					out << "\tpushl %eax" << endl;
				}
				switch(p->children[i]->type)
				{
				case Boolean:
					sum += 1;
					break;
				case Char:
					sum += 1;
					break;
				default:
					sum += 4;
					break;
				}
			}
			sum += 4;
			out << "\tpushl $" << print_content << t->children[0]->attr.symtbl_seq << endl;
			out << "\tcall printf" << endl;
			out << "\taddl $" << sum << ", %esp" << endl;
		}
		else if(t->children[0]->kind == EXPR_NODE)
		{
			out << "\tpushl $" << print_content << t->children[0]->attr.symtbl_seq << endl;
			out << "\tcall printf" <<endl;
			out << "\taddl $4, %esp" << endl; 
		}
	}
	else if (t->kind_kind == SCAN_STMT)
	{
		int i = 0, sum = 0;
		Node* p = t->children[1];
		for(; p->children[i]; i++);
		i = i - 1;
		for(; i >= 0; i--)
		{
			out << "\tpushl $";
			switch(p->children[i]->kind_kind)
			{
			case ID_EXPR:
				out << "_" << p->children[i]->attr.name << p->children[i]->attr.symtbl_seq << endl;
				break;
			// case CONST_EXPR:
			// 	out << p->children[i]->attr.vali << endl;
			// 	break;
			default:
				out << "t" << p->children[i]->temp_var << endl;
				break;
			}
			switch(p->children[i]->type)
			{
			case Integer:
				sum += 4;
				break;
			case Char:
				sum += 1;
				break;
			case Boolean:
				sum += 1;
				break;
			}
		}
		out << "\tpushl $" << scan_content << t->children[0]->attr.symtbl_seq << endl;
		out << "\tcall scanf" << endl;
		sum += 4;
		out << "\taddl $" << sum << ", %esp" << endl;
	}
	else if (t->kind_kind == RETURN_STMT)
	{
		Node*p = t->children[0];
		recursive_gen_code(out, p);
		out << "\tmovl ";
		if(p->kind_kind == ID_EXPR)
		{
			out << "_" << p->attr.name << p->attr.symtbl_seq;
		}
		else if(p->kind_kind == CONST_EXPR)
		{
			out << "$" << p->attr.vali;
		}
		else 
		{
			out << "t" << p->temp_var;
		}
		out << ", %eax" << endl;
		out << "\tret" << endl;
	}
    /* ... */
}

// 生成表达式的asm码
void tree::expr_gen_code(ostream &out, Node *t)
{
	if (t->label.begin_label != "")
		out << t->label.begin_label << ":" << endl;
	
	get_temp_var(t);

	Node *e1 = t->children[0];  // 运算符1
	Node *e2 = t->children[1];  // 运算符2

	if(t->kind_kind == OP_EXPR)
	{
		// 如果是赋值
		if(t->attr.op == OP_ASSIGN)
		{
			recursive_gen_code(out, e2);
			recursive_gen_code(out, e1);
			out << "\tmovl ";
			if(e2->kind_kind == ID_EXPR)
			{
				out << "_" << e2->attr.name << e2->attr.symtbl_seq;
				out << ", %eax" << endl;
				out << "\tmovl %eax, _";
				out << e1->attr.name << e1->attr.symtbl_seq << endl;
			}
			else if(e2->kind_kind == CONST_EXPR)
			{
				out << "$" << e2->attr.vali;
				out << ", _";
				out << e1->attr.name << e1->attr.symtbl_seq << endl;
			}
			else
			{
				out << "t" << e2->temp_var;
				out << ", %eax" << endl;
				out << "\tmovl %eax, _";
				out << e1->attr.name << e1->attr.symtbl_seq << endl;
			}
			return;
		}

		switch (t->attr.op)
		{
		// 加法
		case OP_PLUS:
			recursive_gen_code(out, e1);
			recursive_gen_code(out, e2);
			// 把运算符1的值先给%eax
			out << "\tmovl ";
			// 运算符1的类型的类型是标识符
			if (e1->kind_kind == ID_EXPR)
				// 输出标识符的名称
				out << "_" << e1->attr.name << e1->attr.symtbl_seq;
			// 如果运算符1的类型的类型是常量
			else if (e1->kind_kind == CONST_EXPR)
				// 直接输出数值
				out << "$" << e1->attr.vali;
			// 以上都不是的话，就是临时变量（常量是字符的话，在类型检查的时候就查出来了）
			else out << "t" << e1->temp_var;
			out << ", %eax" <<endl;

			// 做加法
			out << "\taddl ";
			// 如果运算符2的类型的类型是标识符
			if (e2->kind_kind == ID_EXPR)
				// 输出标识符
				out << "_" << e2->attr.name << e2->attr.symtbl_seq;
			// 如果是常量
			else if (e2->kind_kind == CONST_EXPR)
				// 输出数值
				out << "$" << e2->attr.vali;
			// 以上情况都不是，就输出临时变量
			else out << "t" << e2->temp_var;
			out << ", %eax" << endl;  // 将值赋给%eax
			// 把结果给t的临时变量
			out << "\tmovl %eax, t" << t->temp_var << endl;
			break;
		// 减法
		case OP_MINUS:
			recursive_gen_code(out, e1);
			recursive_gen_code(out, e2);
			// 把运算符1的值先给%eax
			out << "\tmovl ";
			// 运算符1的类型的类型是标识符
			if (e1->kind_kind == ID_EXPR)
				// 输出标识符的名称
				out << "_" << e1->attr.name << e1->attr.symtbl_seq;
			// 如果运算符1的类型的类型是常量
			else if (e1->kind_kind == CONST_EXPR)
				// 直接输出数值
				out << "$" << e1->attr.vali;
			// 以上都不是的话，就是临时变量（常量是字符的话，在类型检查的时候就查出来了）
			else out << "t" << e1->temp_var;
			out << ", %eax" <<endl;

			// 做减法
			out << "\tsubl ";
			// 如果运算符2的类型的类型是标识符
			if (e2->kind_kind == ID_EXPR)
				// 输出标识符
				out << "_" << e2->attr.name << e2->attr.symtbl_seq;
			// 如果是常量
			else if (e2->kind_kind == CONST_EXPR)
				// 输出数值
				out << "$" << e2->attr.vali;
			// 以上情况都不是，就输出临时变量
			else out << "t" << e2->temp_var;
			out << ", %eax" << endl;  // 将值赋给%eax
			// 把结果给t的临时变量
			out << "\tmovl %eax, t" << t->temp_var << endl;
			break;
		// 乘法
		case OP_MULT:
			recursive_gen_code(out, e1);
			recursive_gen_code(out, e2);
			// 把运算符1的值先给%eax
			out << "\tmovl ";
			// 运算符1的类型的类型是标识符
			if (e1->kind_kind == ID_EXPR)
				// 输出标识符的名称
				out << "_" << e1->attr.name << e1->attr.symtbl_seq;
			// 如果运算符1的类型的类型是常量
			else if (e1->kind_kind == CONST_EXPR)
				// 直接输出数值
				out << "$" << e1->attr.vali;
			// 以上都不是的话，就是临时变量（常量是字符的话，在类型检查的时候就查出来了）
			else out << "t" << e1->temp_var;
			out << ", %eax" <<endl;

			// 做乘法
			out << "\timul ";
			// 如果运算符2的类型的类型是标识符
			if (e2->kind_kind == ID_EXPR)
				// 输出标识符
				out << "_" << e2->attr.name << e2->attr.symtbl_seq;
			// 如果是常量
			else if (e2->kind_kind == CONST_EXPR)
				// 输出数值
				out << "$" << e2->attr.vali;
			// 以上情况都不是，就输出临时变量
			else out << "t" << e2->temp_var;
			out << ", %eax" << endl;  // 将值赋给%eax
			// 把结果给t的临时变量
			out << "\tmovl %eax, t" << t->temp_var << endl;
			break;
		// 除法
		case OP_DIV:
			recursive_gen_code(out, e1);
			recursive_gen_code(out, e2);
			// 把运算符1的值先给%eax
			out << "\tmovl ";
			// 运算符1的类型的类型是标识符
			if (e1->kind_kind == ID_EXPR)
				// 输出标识符的名称
				out << "_" << e1->attr.name << e1->attr.symtbl_seq;
			// 如果运算符1的类型的类型是常量
			else if (e1->kind_kind == CONST_EXPR)
				// 直接输出数值
				out << "$" << e1->attr.vali;
			// 以上都不是的话，就是临时变量（常量是字符的话，在类型检查的时候就查出来了）
			else out << "t" << e1->temp_var;
			out << ", %eax" <<endl;

			// 做除法
			out << "\tidiv ";
			// 如果运算符2的类型的类型是标识符
			if (e2->kind_kind == ID_EXPR)
				// 输出标识符
				out << "_" << e2->attr.name << e2->attr.symtbl_seq;
			// 如果是常量
			else if (e2->kind_kind == CONST_EXPR)
				// 输出数值
				out << "$" << e2->attr.vali;
			// 以上情况都不是，就输出临时变量
			else out << "t" << e2->temp_var;
			out << ", %eax" << endl;  // 将值赋给%eax
			// 把结果给t的临时变量
			out << "\tmovl %eax, t" << t->temp_var << endl;
			break;
		// 与
		case OP_AND:
			recursive_gen_code(out, e1);
			recursive_gen_code(out, e2);
			// 把运算符1的值先给%eax
			out << "\tmovl ";
			// 运算符1的类型的类型是标识符
			if (e1->kind_kind == ID_EXPR)
				// 输出标识符的名称
				out << "_" << e1->attr.name << e1->attr.symtbl_seq;
			// 如果运算符1的类型的类型是常量
			else if (e1->kind_kind == CONST_EXPR)
				// 直接输出数值
				out << "$" << e1->attr.vali;
			// 以上都不是的话，就是临时变量（常量是字符的话，在类型检查的时候就查出来了）
			else out << "t" << e1->temp_var;
			out << ", %eax" <<endl;

			// 做加法
			out << "\tand ";
			// 如果运算符2的类型的类型是标识符
			if (e2->kind_kind == ID_EXPR)
				// 输出标识符
				out << "_" << e2->attr.name << e2->attr.symtbl_seq;
			// 如果是常量
			else if (e2->kind_kind == CONST_EXPR)
				// 输出数值
				out << "$" << e2->attr.vali;
			// 以上情况都不是，就输出临时变量
			else out << "t" << e2->temp_var;
			out << ", %eax" << endl;  // 将值赋给%eax
			// 把结果给t的临时变量
			out << "\tmovl %eax, t" << t->temp_var << endl;
			break;
		case OP_NOT:
			recursive_gen_code(out, e1);
			out << "\tmovl ";
			// 运算符1的类型的类型是标识符
			if (e1->kind_kind == ID_EXPR)
				// 输出标识符的名称
				out << "_" << e1->attr.name << e1->attr.symtbl_seq;
			// 如果运算符1的类型的类型是常量
			else if (e1->kind_kind == CONST_EXPR)
				// 直接输出数值
				out << "$" << e1->attr.vali;
			// 以上都不是的话，就是临时变量（常量是字符的话，在类型检查的时候就查出来了）
			else out << "t" << e1->temp_var;
			out << ", %eax" <<endl;

			out << "\txor ";
			// 运算符1的类型的类型是标识符
			if (e1->kind_kind == ID_EXPR)
				// 输出标识符的名称
				out << "_" << e1->attr.name << e1->attr.symtbl_seq;
			// 如果运算符1的类型的类型是常量
			else if (e1->kind_kind == CONST_EXPR)
				// 直接输出数值
				out << "$" << e1->attr.vali;
			// 以上都不是的话，就是临时变量（常量是字符的话，在类型检查的时候就查出来了）
			else out << "t" << e1->temp_var;
			out << ", %eax" <<endl;
			out << "\tmovl %eax, t" << t->temp_var << endl;
			break;
		// 大于
		case OP_L:
			break;
		case OP_EQ:
			recursive_gen_code(out, e1);
			recursive_gen_code(out, e2);
			// 把运算符1的值先给%eax
			out << "\tmovl ";
			// 运算符1的类型的类型是标识符
			if (e1->kind_kind == ID_EXPR)
				// 输出标识符的名称
				out << "_" << e1->attr.name << e1->attr.symtbl_seq;
			// 如果运算符1的类型的类型是常量
			else if (e1->kind_kind == CONST_EXPR)
				// 直接输出数值
				out << "$" << e1->attr.vali;
			// 以上都不是的话，就是临时变量（常量是字符的话，在类型检查的时候就查出来了）
			else out << "t" << e1->temp_var;
			out << ", %eax" <<endl;

			// 做比较
			out << "\tcmpl ";
			// 如果运算符2的类型的类型是标识符
			if (e2->kind_kind == ID_EXPR)
				// 输出标识符
				out << "_" << e2->attr.name << e2->attr.symtbl_seq;
			// 如果是常量
			else if (e2->kind_kind == CONST_EXPR)
				// 输出数值
				out << "$" << e2->attr.vali;
			// 以上情况都不是，就输出临时变量
			else out << "t" << e2->temp_var;
			out << ", %eax" << endl;  // 将值赋给%eax
			// // 把结果给t的临时变量
			// out << "\tmovl %eax, $t" << t->temp_var << endl;
			// out << e1->label.next_label << endl;
			out << "\tjne " << t->label.false_label <<endl;
			break;
		default:
			break;
		/* ... */
		}
	}
	else if(t->kind_kind == FUNC_EXPR)
	{
		int sum = 0;
		if(!t->children[1])
		{
			out << "\tcall " << t->children[0]->attr.name << endl;
			out << "\tmovl %eax, t" << t->temp_var << endl;
			return;
		}
		int i = 0, j;
		Node* p = t->children[1];
		// cout << "获得了p" << endl;
		for(; i < MAX_PARAM && p->children[i]; i++);
		j = i;
		// cout << "确定了i" << endl;
		for(i = i - 1; i >= 0; i--)
		{
			recursive_gen_code(out, p->children[i]);
			switch(p->children[i]->kind_kind)
			{
			case ID_EXPR:
				// get_temp_var(p->children[i]);
				out << "\tmovl _" << p->children[i]->attr.name << p->children[i]->attr.symtbl_seq << ", %eax" << endl;
				// out << "\tmovl %eax, t" << p->children[i]->temp_var << endl;
				out << "\tpushl %eax" << endl;
				break;
			case CONST_EXPR:
				out << "\tmovl $" << p->children[i]->attr.vali << ", %eax" << endl;
				out << "\tpushl %eax" << endl;
				break;
			default:
				
				out << "\tmovl t" << p->children[i]->temp_var << ", %eax" << endl;
				out << "\tpushl %eax" << endl;
				break;
			}
			switch(p->children[i]->type)
			{
			case Integer:
				sum += 4;
				break;
			default:
				sum += 1;
				break;
			}
		}
		out << "\tcall " << t->children[0]->attr.name << endl;
		out << "\taddl $" << sum << ", %esp" << endl;
		out << "\tmovl %eax, t" << t->temp_var << endl;
		i = j;
		out << endl;
	}
}

// 变量/常量声明
void tree::decl_gen_code(ostream &out, Node *t)
{
	if (t->label.begin_label != "")
		out << t->label.begin_label << ":" << endl;
	Node*  p = t->children[1]->children[0];
	for(; p ; p = p->sibling)
	{
		if(p->attr.op != OP_ASSIGN)
			continue;
		Node* e1 = p->children[0];
		Node* e2 = p->children[1];
		recursive_gen_code(out, e2);
		recursive_gen_code(out, e1);
		out << "\tmovl ";
		if(e2->kind_kind == ID_EXPR)
		{
			if(symtbl.table[e1->attr.name][e1->attr.symtbl_seq].position)
				out << symtbl.table[e1->attr.name][e1->attr.symtbl_seq].position << "(%esp)";
			else
				out << "_" << e2->attr.name << e2->attr.symtbl_seq;
			out << ", %eax" << endl;
			out << "\tmovl %eax, " << endl;
			if(symtbl.table[e2->attr.name][e2->attr.symtbl_seq].position)
				out << symtbl.table[e2->attr.name][e2->attr.symtbl_seq].position << "(%esp)";
			else
				out << "_" << e1->attr.name << e1->attr.symtbl_seq << endl;
		}
		else if(e2->kind_kind == CONST_EXPR)
		{
			out << "$" << e2->attr.vali << ", ";
			if(symtbl.table[e1->attr.name][e1->attr.symtbl_seq].position)
				out << symtbl.table[e1->attr.name][e1->attr.symtbl_seq].position << "(%esp)";
			else
				out << "_" << e1->attr.name << e1->attr.symtbl_seq << endl;
		}
		else
		{
			out << "t" << e2->temp_var << ", ";
			if(symtbl.table[e1->attr.name][e1->attr.symtbl_seq].position)
				out << symtbl.table[e1->attr.name][e1->attr.symtbl_seq].position << "(%esp)";
			else
				out << "_" << e1->attr.name << e1->attr.symtbl_seq << endl;
		}
		continue;
	}
}

// 生成函数定义的asm码
void tree::func_gen_code(ostream &out, Node *t)
{
	out << "\t.text" << endl;
	out << "\t.global " << t->children[1]->attr.name <<endl;
	out << "\t.type " << t->children[1]->attr.name << ", @function" << endl;
	if(t->label.begin_label != "")
		out << t->label.begin_label << ":" << endl;
	int sum = 0;
	
	Node* e2;
	if(t->children[2]->kind == LIST_NODE)
	{
		// for(Node* p = t->children[2]->children[0]; p; p = p->sibling)
		// {
		// 	switch(p->children[1]->type)
		// 	{
		// 	case Integer:
		// 		sum += 4;
		// 		out << "\tmovl " << sum << "(%esp), %eax" << endl;
		// 		out << "\tmovl %eax, ";
		// 		out << "_" << p->children[1]->attr.name << p->children[1]->attr.symtbl_seq << endl;
		// 		break;
		// 	case Char:
		// 		sum += 1;
		// 		out << "\tmovl " << sum << "(%esp), %eax" << endl;
		// 		out << "\tmovl %eax, ";
		// 		out << "_" << p->children[1]->attr.name << p->children[1]->attr.symtbl_seq << endl;
		// 		break;
		// 	case Boolean:
		// 		sum += 1;
		// 		out << "\tmovl " << sum << "(%esp), %eax" << endl;
		// 		out << "\tmovl %eax, ";
		// 		out << "_" << p->children[1]->attr.name << p->children[1]->attr.symtbl_seq << endl;
		// 		break;
		// 	}
		// }
		e2 = t->children[3];
	}
	else
		e2 = t->children[2];
	recursive_gen_code(out, e2);
	out << endl;
}

// 递归生成asm码
void tree::recursive_gen_code(ostream &out, Node *t)
{
	// 如果是语句
	if (t->kind == STMT_NODE)
	{
		// 生成该语句
		stmt_gen_code(out, t);
	}
	// 如果是表达式语句并且是op表达式
	else if (t->kind == EXPR_NODE && (t->kind_kind == OP_EXPR || t->kind_kind == FUNC_EXPR))
	{
		// 生成该语句
		expr_gen_code(out, t);
	}
	else if (t->kind == DECL_NODE && t->kind_kind != FUNC_DECL)
	{
		decl_gen_code(out, t);
	}
	else if (t->kind == DECL_NODE)
	{
		func_gen_code(out, t);
	}
	// 其它类型的节点就不做翻译输出
}

// 生成asm码（自底向上）   上面的节点先进入函数，但因为是递归，下面节点的语句先生成
void tree::gen_code(ostream &out)
{
	// 生成头部asm代码
	gen_header(out);
	gen_decl(out);
    out << endl << endl << "# your asm code here" << endl;
	// out << "\t.text" << endl;
    // out << "\t.globl main" << endl;
	recursive_gen_code(out, root);  // 递归输出语句
	out << "\t.section .note.GNU-stack,\"\",@progbits" << endl;
}
