#ifndef OPERATOR_H
#define OPERATOR_H

class Operator
{
    private :
        char op;
    public :    
        Operator();
        Operator(char op);
        char getOp();
        int operate(int a, int b);  
};

#endif