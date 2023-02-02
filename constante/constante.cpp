//Create constant class containing an integer value and the necessary methods to create it and manipulate it

#include "constante.h"
class Constante
{
    private:
        int value; //Value in private to keep it constant

    public:
        Constante(int value);
        int getValue(){
            return value;
        };
};
