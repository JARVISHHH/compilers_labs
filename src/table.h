#ifndef TABLE_H
#define TABLE_H

#include "pch.h"
#include "tree.h"
#include "type.h"
using namespace std;

struct scope {
public:
    struct TreeNode* Id;  // 代表的结点
    int unmatched;  // 未匹配的左括号的数量

    scope(TreeNode*);
    void unmatch_add();
    int match();
    void copy_to(TreeNode*);
};

struct compare {
    bool operator() (scope* s1, scope* s2);
};

struct table {
public:
    unordered_map<string, stack<scope*>> symbol_table;
    unordered_map<string, list<TreeNode*>> all_symbols;
    unordered_map<string, stack<scope*>>::iterator iter;

    void add_symbol(TreeNode*);
    scope* find_symbol(string);
    void unmatch_add();
    void match();
    void match(string, bool);
    void change(string, int);
};


#endif