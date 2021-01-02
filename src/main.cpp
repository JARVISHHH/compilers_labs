#include "common.h"
#include <fstream>

// extern  Node *root;  // main.y
extern FILE *yyin;  // yacc缺省输入
extern tree parse_tree;
extern int yyparse();

using namespace std;
int main(int argc, char *argv[])
{
    // 写入文件
    if (argc == 2)
    {
        FILE *fin = fopen(argv[1], "r");
        if (fin != nullptr)
        {
            yyin = fin;
        }
        else
        {
            cerr << "failed to open file: " << argv[1] << endl;
        }
    }
    // yacc生成的语法分析程序的入口点
    // cout<<"分析开始"<<endl;
    yyparse();
    // cout<<"分析完成"<<endl;
    if(parse_tree.root != NULL) {
        // cout<<"获取标签"<<endl;
        parse_tree.get_label();
        // cout<<"获取代码"<<endl;
        parse_tree.gen_code(std::cout);
        // root->genNodeId();  // 为整棵语法树授予id
        // root->printAST();
    }
    return 0;
}