#ifndef OPERATOR_H
#define OPERATOR_H
//DEFINE operator class 
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
#endif // OPERATOR_H