#include "tree.h"

// 构造函数
TreeNode::TreeNode(int lineno, NodeType type) {
    this->lineno = lineno;
    this->nodeType = type;
}

// 添加孩子结点
void TreeNode::addChild(TreeNode* child) {
    // 若当前没有孩子
    if(this->child == nullptr)
        this->child = child;
    else
        this->child->addSibling(child);
}

void TreeNode::addSibling(TreeNode* sibling){
    TreeNode* cur = this;
    // 循环找到链表的尾部
    while(cur->sibling != nullptr)
        cur = cur->sibling;
    cur->sibling = sibling;
}

// 为树上每个节点分配序号
void TreeNode::genNodeId() {
    int cur_nodeID = 0;
    this->nodeID = cur_nodeID++;
    TreeNode* cur;
    // 深度优先遍历排序号
    stack<TreeNode*> s;
    s.push(this);
    while(!s.empty())
    {
        cur = s.top();
        TreeNode* child = cur->child;
        while(child != nullptr && child->nodeID != -1)
            child = child->sibling;
        if(child == nullptr)
            s.pop();
        else
        {
            child->nodeID = cur_nodeID++;
            s.push(child);
        }
    }
}

void TreeNode::printNodeInfo() {
    // 输出行号信息
    cout << "lno@" << this->lineno << "\t@" << this->nodeID << '\t';
    
    // 输出类型
    cout << this->nodeType2String(this->nodeType) << '\t';

    // 输出附加信息
    // 如果是常量或类型，输出类型
    if(this->nodeType == NODE_CONST || this->nodeType == NODE_TYPE)
        cout << "type: " << this->type->getTypeInfo() << '\t';
    // 如果是变量，输出变量名
    else if(this->nodeType == NODE_VAR)
        cout << "varname: " << this->var_name << '\t';
    // 如果是表达式，输出所有的孩子结点
    else if(this->nodeType == NODE_EXPR)
    {
        cout<< "children: [";
        this->printChildrenId();
        cout << "]" << '\t';
    }
    // 如果是语句，输出孩子和语句类型
    else if(this->nodeType == NODE_STMT)
    {
        cout<< "children: [";
        this->printChildrenId();
        cout << "]\t";
        cout << this->sType2String(this->stype) << '\t';
    }
    cout << endl;
}

void TreeNode::printChildrenId() {
    // 遍历输出所有孩子的id
    TreeNode* child = this->child;
    while(child != nullptr)
    {
        cout<< "@" << child->nodeID << " ";
        child = child->sibling;
    }
}

void TreeNode::printAST() {
    int max = 0, before_line = 0;
    this->printNodeInfo();
    TreeNode* cur;
    // 深度优先遍历排序号
    stack<TreeNode*> s;
    s.push(this);
    while(!s.empty())
    {
        cur = s.top();
        TreeNode* child = cur->child;
        while(child != nullptr && child->nodeID <= max)
            child = child->sibling;
        if(child == nullptr)
            s.pop();
        else
        {
            if(child->lineno > before_line)
            {
                cout << endl;
                before_line = child->lineno;
            }
            // 仅在压栈时输出
            child->printNodeInfo();
            max = child->nodeID;
            s.push(child);
        }
    }
}


// You can output more info...
void TreeNode::printSpecialInfo() {
    switch(this->nodeType){
        case NODE_CONST:
            break;
        case NODE_VAR:
            break;
        case NODE_EXPR:
            break;
        case NODE_STMT:
            break;
        case NODE_TYPE:
            break;
        default:
            break;
    }
}

string TreeNode::sType2String(StmtType type) {
    switch (type)
    {
    case STMT_SKIP:
        return "skip";
    case STMT_DECL:
        return "decl";
    case STMT_ASSIGN:
        return "assign";
    case STMT_IF_ELSE:
        return "if";
    case STMT_WHILE:
        return "while";
    case STMT_PRINTF:
        return "prinf";
    case STMT_SCANF:
        return "scanf";
    default:
        break;
    }
}


string TreeNode::nodeType2String (NodeType type){
    switch (type)
    {
    case NODE_CONST:
        return "const";
    case NODE_VAR:
        return "variable";
    case NODE_EXPR:
        return "expression";
    case NODE_TYPE:
        return "type";
    case NODE_STMT:
        return "statement";
    case NODE_PROG:
        return "program";
    default:
        break;
    }
}
