#include "variable.h"
class Variable
{
private:
    char ident;
public:
Variable(){
        this->ident = 'a';
    };
    Variable(char ident){
        this->ident = ident;
    };
      char getIdent(){
        return ident;
    };
  
};

