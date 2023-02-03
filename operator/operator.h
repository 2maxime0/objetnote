#ifndef OPERATOR_H
#define OPERATOR_H

class Operator
{
    private :
        char op; //Operator in private to keep it constant
    public :    
        Operator();
        Operator(char op);
        char getOp();
        int operate(int a, int b);  
};

#endif