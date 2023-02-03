
#ifdef NODE_H
#define NODE_H

#include <string>
#include "../operator/operator.h"
#include "../constante/constante.h"
#include "../variable/variable.h"
using namespace std;
class Node
{ 
    public:
        Node();
       
};   

class NodeOperator : public Node
{
    private:
        Operator op;
        Node *left;
        Node *right;

    public:
        NodeOperator(char op, Node *left, Node *right);
       
};

class NodeConstante : public Node
{
    private:
        Constante value;

    public:
        NodeConstante(int value);
       
};

class NodeVariable : public Node
{
   private:
        Variable value;
    public:
        NodeVariable(char  value);
       
};

//create a function who take a string and return a node

Node* createTree(const std::string& expression);

#endif
