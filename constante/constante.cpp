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