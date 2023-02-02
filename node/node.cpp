//create a node class who contain an operator and two pointer to node
#include "node.h"

//constructor of Node
Node::Node()
{
}


NodeOperator::NodeOperator(Operator op, Node *left, Node *right)
{
    this->op = op;
    this->left = left;
    this->right = right;
}

NodeConstante::NodeConstante(int value)
{
    this->value = Constante(value);
}

NodeVariable::NodeVariable(char  value)
{
    this->value = Variable(value);
}
