#include "node.h"
#include <iostream>
#include <stack>

Node::Node()
{
}


NodeOperator::NodeOperator(Operator op, Node *left, Node *right)
{
    this->op = op;
    this->left = left;
    this->right = right;
}

Operator NodeOperator::getOp() { return op; }

Node* NodeOperator::getLeft() { return left; }

Node* NodeOperator::getRight() { return right; }

NodeConstante::NodeConstante(int value)
{
    this->value = Constante(value);
}

Constante NodeConstante::getValue() { return value; }

NodeVariable::NodeVariable(char  value)
{
    this->value = Variable(value);
}

Variable NodeVariable::getValue() { return value; }

Node* Node::buildExpressionTree(const string& input) {
    stack<Node*> nodes;
    for (char c : input) {
        if (isdigit(c)) {
            nodes.push(new NodeConstante(c - '0'));
        } else if (isalpha(c)) {
            nodes.push(new NodeVariable(c));
        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            Node* right = nodes.top();
            nodes.pop();
            Node* left = nodes.top();
            nodes.pop();
            nodes.push(new NodeOperator(Operator(c), left, right));
        }
    }
    return nodes.top();
}

void Node::printExpressionTree(Node* node) {
    if (!node) return;

    if (NodeConstante* nc = dynamic_cast<NodeConstante*>(node)) {
        cout << nc->getValue().getValue() << " ";
    } else if (NodeVariable* nv = dynamic_cast<NodeVariable*>(node)) {
        cout << nv->getValue().getIdent() << " ";
    } else if (NodeOperator* no = dynamic_cast<NodeOperator*>(node)) {
        cout << "(";
        printExpressionTree(no->getLeft());
        cout << no->getOp().getOp() << " ";
        printExpressionTree(no->getRight());
        cout << ")";
    }
}

