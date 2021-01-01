#ifndef TREE_H
#define TREE_H

#include "pch.h"
#include "symbol.h"


// 节点类型
enum Node_Type
{
	STMT_NODE = 0,  // 语句节点
	EXPR_NODE,  // 表达式节点（包括赋值）
	DECL_NODE,  // 声明节点
	LIST_NODE,  // 列表节点
};

// 语句类型
enum Stmt_Type
{
	WHILE_STMT = 0,  // while循环语句
	FOR_STMT,  // for循环语句
	IF_STMT,  // if分支语句
	ELSE_STMT,  // else分支语句
	RETURN_STMT,  // 返回
	PRINT_STMT,  // 输出语句
	SCAN_STMT,  // 输入语句
	COMP_STMT,  // 复合语句（语句块）
	EMPTY_STMT,  // 空语句
};

// 表达式类型
enum Expr_Type
{
	TYPE_EXPR = 0,  // 类型表达式
	OP_EXPR,  // 运算表达式
    CONST_EXPR,  // 常量表达式
	ID_EXPR  // 标识符
};

// 变量声明
enum  Decl_Type
{
	VAR_DECL = 0,  // 变量声明
	CONST_DECL,  // 常量声明
};

// 列表类型
enum List_Type
{
	DECLARE_LIST = 0,  // 声明列表
	PRINT_LIST,  // 打印列表
	SCAN_LIST,  //输入列表
	PARAM_LIST,  // 参数列表
};

enum
{
	CONST_VAR = 0,
	VAR_VAR,
};

// 变量/常量类型
enum TYPE
{
	Notype = 0,  // 无类型
	Integer,  // 整型
	Boolean,  // 布尔类型
	Char,  // 字符类型
	String,  // 字符串类型
};

// 操作数类型
enum OperatorType
{
    OP_DOT,  // .
    OP_ARROW,  // ->
    OP_PLUS,  // +
    OP_MINUS,  // -
    OP_MULT,  // *
    OP_DIV,  // /
    OP_AND,  // &&
    OP_OR,  // ||
    OP_NOT,  // !
    OP_ASSIGN,  // =
    OP_MULASSIGN,
    OP_PLUSASSIGN,
    OP_MINUSASSIGN,
    OP_DIVASSIGN,
    OP_L,  // >
    OP_LEQ,  // >=
    OP_S,  // <
    OP_SEQ,  // <=
    OP_EQ,  // ==
    OP_NEQ,  // !=
    OP_P,  // ()
    OP_BRCKET, // []
    OP_DPLUS,  // ++
    OP_DMINUS,  // --
    OP_MOD,  // %
    OP_POS,  // &
    OP_COMMA,  // ,
};

#define MAX_CHILDREN 10

// 节点属性
struct NodeAttr {
	int op;  // 操作符（枚举类型）
	int vali;  // 整型数值
	char valc;  // 字符值
	string valstr;  // 字符串
	int symtbl_seq = -1;  // 符号表序号
	string name;
	
	NodeAttr(void) { op = 0; }
	NodeAttr(int i)	{ op = i; }
	NodeAttr(char c) { valc = c; }
};

// 标签
struct Label {
	// 标签是string型的，包含的只是数字，表示是哪个标签
	// 真假不同情况下去不同的标签
	string true_label;
	string false_label;
	// 开始标签和下一个标签
	string begin_label;
	string next_label;
};

struct Node
{
	struct Node *children[MAX_CHILDREN] = {nullptr};  // 孩子节点
	struct Node *sibling;  // 兄弟节点
	int lineno;  // 行号
	int kind;  // 当前节点的类型（枚举）   所属的大类型（语句）
	int kind_kind;  // 类型的类型（枚举）   大类型中的具体类型（语句中的while循环语句）
	NodeAttr attr;  // 节点属性
	int type = Notype;  // 节点类型
	int seq;  // 节点序号
	int temp_var;  // 临时变量
	Label label;  // 节点标签

	Node();
	Node(int lineno, int kind, int kind_kind, NodeAttr NA, int type, int seq);
	void output(void);  // 输出
	void addChild( Node*);  // 增加孩子
    void addSibling( Node*);  // 增加兄弟
};

class tree
{
public:
	Node *root;  // 根
	int node_seq = 0;  // 节点序号
	int temp_var_seq = 0;  // 临时变量序号
	int label_seq = 0;  // 标签序号

private:
	void type_check(Node *t);  // 类型检查函数
	void get_temp_var(Node *t);  // 获得临时变量
	string new_label(void);  // 新建一个标签
	void recursive_get_label(Node *t);  // 递归获得标签
	void stmt_get_label(Node *t);  // 语句获得标签
	void expr_get_label(Node *t);  // 表达式获得标签
	void gen_header(ostream &out);  // 生成asm代码头部
	void gen_decl(ostream &out, Node *t);  // 生成声明部分
	void recursive_gen_code(ostream &out, Node *t);  // 递归生成代码
	void stmt_gen_code(ostream &out, Node *t);  // 语句生成asm语句
	void expr_gen_code(ostream &out, Node *t);  // 表达式生成asm语句

public:
	Node *NewRoot(int kind, int kind_kind, NodeAttr attr, int type,
			Node* child = NULL, int this_lineno = lineno);
		// Node *child1 = NULL, Node *child2 = NULL, Node *child3 = NULL, Node *child4 = NULL);  // 新建新的根
	void get_label(void);  // 获得标签（自顶向下）
	void gen_code(ostream &out);  // 生成代码（自底向上）
};

#endif