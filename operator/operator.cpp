#include "operator.h"
class Operator
{
    private :
        char op; 
    public :    
        Operator(){
            op = '+';
        };
        Operator(char op){
            this->op = op;
        };
        char getOp(){
            return op;
        };
        int operate(int a, int b){
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
        };  
};
