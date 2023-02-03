//Create constant class containing an integer value and the necessary methods to create it and manipulate it

#include "constante.h"

Constante::Constante(){
    this->value = 0;
};

Constante::Constante(int value){
    this->value = value;
};

int Constante::getValue(){
    return value;
};