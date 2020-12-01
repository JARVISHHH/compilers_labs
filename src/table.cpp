#include "table.h"

scope::scope(TreeNode* id) {
    this->Id = id;
    this->unmatched = 0;
}

void scope::unmatch_add() {
    this->unmatched += 1;
    // cout<<"unmatch"<<endl;
    // cout<<this->unmatched<<" "<<this->Id->int_val<<endl;
}

int scope::match() {
    this->unmatched -= 1;
    // cout<<"match"<<endl;
    // cout<<this->unmatched<<" "<<this->Id->int_val<<endl;
    return this->unmatched;
}

void scope::copy_to(TreeNode* child) {
    // 根据类型进行对应内容的赋值
    child->int_val = this->Id->int_val;
    child->b_val = this->Id->b_val;
    child->str_val = this->Id->str_val;
    // switch (child->type->type)
    // {
    // case VALUE_BOOL:
    //     child->b_val = this->Id->b_val;
    //     break;
    // case VALUE_CHAR:
    //     child->str_val = this->Id->str_val[0];
    //     break;
    // case VALUE_INT:
    //     child->int_val = this->Id->int_val;
    //     break;
    // case VALUE_STRING:
    //     child->str_val = this->Id->str_val;
    // default:
    //     break;
    // }
    return;
}

bool compare::operator() (scope* s1, scope* s2) {
    if(s1->unmatched < 0 && s2->unmatched < 0) return s1->unmatched > s2->unmatched;
    if(s1->unmatched < 0) return 1;
    if(s2->unmatched < 0) return 0;
    return s1->unmatched > s2->unmatched;
}

void table::add_symbol(TreeNode* node) {
    all_symbols[node->var_name].push_back(node);
    // 新建一个新的scope
    TreeNode* new_node = new TreeNode(node->lineno, node->nodeType);
    new_node->var_name = node->var_name;
    // new_node->int_val = node->int_val;
    // new_node->b_val = node->b_val;
    // new_node->str_val = node->str_val;
    // new_node->given = node->given;
    scope* new_scope = new scope(new_node);
    symbol_table[node->var_name].push(new_scope);
}

scope* table::find_symbol(string name) {
    if(this->all_symbols.count(name) <= 0)
        return nullptr;
    return this->symbol_table[name].top();
}

void table::unmatch_add() {
    this->iter = this->symbol_table.begin();
    while(this->iter != this->symbol_table.end())
    {
        this->iter->second.top()->unmatch_add();
        this->iter++;
    }
}

void table::match() {
    this->iter = this->symbol_table.begin();
    while (this->iter != this->symbol_table.end())
    {
        if(this->iter->second.empty()) 
        {
            this->iter++;
            continue;
        }
        if(this->iter->second.top()->match() < 0)
        {
            this->iter->second.pop();
            if(!this->iter->second.empty())
                this->iter->second.top()->match();
        }
        this->iter++;
    }
}

void table::match(string name, bool del) {
    if(symbol_table[name].top()->match() < 0)
    {
        symbol_table[name].pop();
        if(del && !symbol_table[name].empty())
            symbol_table[name].top()->match();
    }
}

void table::change(string name, int value) {
    this->symbol_table[name].top()->Id->int_val = value;
    return;
}