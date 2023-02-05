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

//getters
Operator NodeOperator::getOp() { return op; }

Node* NodeOperator::getLeft() { return left; }

Node* NodeOperator::getRight() { return right; }

NodeConstante::NodeConstante(int value)
{
    this->value = Constante(value);
}

//getters
Constante NodeConstante::getValue() { return value; }

NodeVariable::NodeVariable(char  value)
{
    this->value = Variable(value);
}

//getters
Variable NodeVariable::getValue() { return value; }


