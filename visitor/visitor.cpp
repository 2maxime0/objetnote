#include "visitor.hpp"
#include "../node/node.h"
#include "../operator/operator.h"
#include "../constante/constante.h"
#include "../variable/variable.h"
#include <map>
#include <iostream>

using namespace std;

void EvalVisitor::visit(NodeConstante* node) {
    result = node->getValue().getValue();
}

void EvalVisitor::visit(NodeVariable* node) {
    char ident = node->getValue().getIdent();
    result = values.at(ident);
}

void EvalVisitor::visit(NodeOperator* node) {
    node->getLeft()->accept(this);
    int left = result;
    node->getRight()->accept(this);
    int right = result;
    result = node->getOp().operate(left, right);
}

void EvalVisitor::setVariableValue(char variable, int value) {
    variableValues[variable] = value;
}

int EvalVisitor::getResult() const { return result; }

void DisplayVisitor::visit(NodeConstante* node) {
    cout << node->getValue().getValue() << " ";
}

void DisplayVisitor::visit(NodeVariable* node) {
    cout << node->getValue().getIdent() << " ";
}

void DisplayVisitor::visit(NodeOperator* node) {
    cout << "(";
    node->getLeft()->accept(this);
    cout << node->getOp().getOp() << " ";
    node->getRight()->accept(this);
    cout << ")";
}





