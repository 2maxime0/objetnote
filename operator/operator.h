//DEFINE operator class 
class Operator
{
    private :
        char op; //Operator in private to keep it constant
    public :    
        Operator(char op);
        char getOp();
        int operate(int a, int b);  
};