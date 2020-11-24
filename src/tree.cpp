#include "tree.h"

TreeNode::TreeNode(int lineno, NodeType type) {

}

void TreeNode::addChild(TreeNode* child) {
    // 若当前没有孩子
    if(this->child == nullptr)
        this->child = child;
    else
    {
        TreeNode* cur = this->child;
        for(; cur->sibling != nullptr; cur = cur->sibling);
        cur->sibling = child;
    }
    
}

void TreeNode::addSibling(TreeNode* sibling){

}


void TreeNode::genNodeId() {

}

void TreeNode::printNodeInfo() {

}

void TreeNode::printChildrenId() {

}

void TreeNode::printAST() {

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
    return "?";
}


string TreeNode::nodeType2String (NodeType type){
    return "<>";
}
