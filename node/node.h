//create a node class who contain an operator and two pointer to node
#include <string>
#include "operator.h"
#include "constante.h"
#include "variable.h"
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
        NodeOperator(Operator op, Node *left, Node *right);
       
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
