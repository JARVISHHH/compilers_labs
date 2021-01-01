#include "symbol.h"
#include "tree.h"
symbol_table symtbl;

void symbol_table::match()
{
	this->iter = this->table.begin();
    while(this->iter != this->table.end())
    {
        for(int i = 0; i < this->table[this->iter->first].size(); i++)
		{
			if(this->table[this->iter->first][i].unmatched >= 0)
				this->table[this->iter->first][i].unmatched--;
		}
    }
}

void symbol_table::unmatch()
{
	this->iter = this->table.begin();
    while(this->iter != this->table.end())
    {
        for(int i = 0; i < this->table[this->iter->first].size(); i++)
		{
			if(this->table[this->iter->first][i].unmatched >= 0)
				this->table[this->iter->first][i].unmatched++;
		}
    }
}

void symbol_table::match(string name)
{
	this->iter = this->table.begin();
	int seq = -1;
    while(this->iter != this->table.end())
    {
		if(this->iter->first == name)
		{
			for(int i = 0; i < this->table[this->iter->first].size(); i++)
			{
				if(this->table[this->iter->first][i].unmatched >= 0)
					seq = i;
			}
			if(seq >= 0)
			{
				this->table[this->iter->first][seq].unmatched--;
			}
		}
    }
}

// 对符号表进行查找，找到名称相同的最后一个活跃符号
int symbol_table::lookup(string name)
{
	int result = -1;
	if(this->table.count(name) <= 0)
		return result;
	for (int i = 0; i < this->table[name].size(); i++)
		if (table[name][i].unmatched >= 0)
			result = i;
	return result;
}

// 插入一个符号
int symbol_table::insert(string name)
{
	int size = this->table[name].size();
	this->table[name][size].type = Notype;
	return size;
}

// 插入一个符号
int symbol_table::insert(string name, int token)
{
	int size = this->table[name].size();
	this->table[name][size].token = token;
	this->table[name][size].type = Notype;
	return size;
}

// 获得token
int symbol_table::gettoken(string name)
{
	int result = -1;
	if(this->table.count(name) <= 0)
		return result;
	for (int i = 0; i < this->table[name].size(); i++)
		if (table[name][i].unmatched >= 0)
			result = this->table[name][i].token;
	return result;
}

// 将pos符号的类型设置为type
int symbol_table::set_type(string name, int pos, int type)
{
	if(this->table.count(name) <= 0)
		return -1;
	// 如果位置有问题，就退出
	if (pos < 0 || pos >= this->table[name].size())
	{
		cerr << "Bad identifier" << endl;
		return -1;
	}
	// 将类型设置为type
	table[name][pos].type = type;
	return 0;
}

// 获得pos符号的类型
int symbol_table::get_type(string name, int pos)
{
	if(this->table.count(name) <= 0)
		return -1;
	// 位置有问题就退出
	if (pos < 0 || pos >= this->table[name].size())
	{
		cerr << "Bad identifier" << endl;
		return -1;
	}
	// 获得pos的类型
	return table[name][pos].type;
}