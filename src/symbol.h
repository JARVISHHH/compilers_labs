#ifndef SYMBOL_H
#define SYMBOL_H

#include "pch.h"
using namespace std;

// symbol的入口
typedef struct TAG_SYMBOL_ENTRY
{
	int token;
	int type;  // 类型
	int unmatched = 0;  // 未匹配的左括号的个数
} symbol_entry;

// 符号表
class symbol_table
{
private:
	unordered_map<string, unordered_map<int, symbol_entry>> table;
	unordered_map<string, unordered_map<int, symbol_entry>>::iterator iter;

public:
	void match();  // 有了右括号
	void unmatch();  // 有了左括号
	void match(string name);  // 仅对名字为name的变量的左括号进行操作
	int lookup(string name);  // 寻找
	int insert(string name);  // 插入
	int insert(string name, int token);  // 插入
	int gettoken(string name);
	int set_type(string name, int pos, int type);  // 将位于pos的符号的类型设置为type
	int get_type(string name, int pos);  // 获得pos的类型
};

#endif