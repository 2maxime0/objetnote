//Create constant class containing an integer value and the necessary methods to create it and manipulate it

#include "constante.h"
class Constante
{
    private:
        int value; //Value in private to keep it constant

    public:
    Constante(){
            this->value = 0;
        
    };
        Constante(int value){
            this->value = value;
        };
        int getValue(){
            return value;
        };
};
