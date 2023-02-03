#include "operator.h"

Operator::Operator()
{
    op = '+';
}

Operator::Operator(char op)
{
    this->op = op;
}

char Operator::getOp()
{
    return op;
}

int Operator::operate(int a, int b)
{
    switch(op){
        case '+':
            return a+b;
        case '-':
            return a-b;
        case '*':
            return a*b;
        case '/':
            return a/b;
        default:
            return 0;
    }
}
