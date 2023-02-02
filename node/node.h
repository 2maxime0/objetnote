//create a node class who contain an operator and two pointer to node
#include "operator.h"
#include "constante.h"
#include "variable.h"
class Node
{ 
    public:
        Node(Operator op, Node *left, Node *right);
        int getValue();
};   

class NodeOperator : public Node
{
    private:
        Operator op;
        Node *left;
        Node *right;

    public:
        NodeOperator(Operator op, Node *left, Node *right);
        int getValue();
};

class NodeConstante : public Node
{
    private:
        int  value;

    public:
        NodeConstante(int value);
        int getValue();
};

class NodeVariable : public Node
{
    private:
        int  value;

    public:
        NodeVariable(int  value);
        int getValue();
};
