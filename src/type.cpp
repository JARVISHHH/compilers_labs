#include "type.h"

// 构造函数
Type::Type(ValueType valueType) {
    this->type = valueType;
}

string Type::getTypeInfo() {
    switch(this->type) {
        case VALUE_BOOL:
            return "bool";
        case VALUE_INT:
            return "int";
        case VALUE_CHAR:
            return "char";
        case VALUE_STRING:
            return "string";
        default:
            cerr << "shouldn't reach here, typeinfo";
            assert(0);
    }
    return "?";
}

void Type::addChild(Type* t)
{

}

void Type::addParam(Type* t)
{

}

void Type::addRet(Type* t)
{

}

int getSize(Type* type)
{
    
}