#include "variable.h"

Variable::Variable() {
this->ident = 'a';
}

Variable::Variable(char ident) {
this->ident = ident;
}

char Variable::getIdent() {
return ident;
}

