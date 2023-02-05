#include "../node/node.h"
#include <map>
#include <iostream>
using namespace std;

class Visitor {
public:
    virtual void visit(NodeConstante* node) = 0;
    virtual void visit(NodeVariable* node) = 0;
    virtual void visit(NodeOperator* node) = 0;
};

class EvalVisitor : public Visitor {
public:
    EvalVisitor(const map<char, int>& values) : values(values) {}

    void visit(NodeConstante* node) override {
        result = node->getValue().getValue();
    }
    void visit(NodeVariable* node) override {
        char ident = node->getValue().getIdent();
        result = values.at(ident);
    }
    void visit(NodeOperator* node) override {
        node->getLeft()->accept(this);
        int left = result;
        node->getRight()->accept(this);
        int right = result;
        result = node->getOp().operate(left, right);
    }
    void setVariableValue(char variable, int value) {
        variableValues[variable] = value;
    }


    int getResult() const { return result; }

private:
    const map<char, int>& values;
    int result;

};

class DisplayVisitor : public Visitor {
public:
    void visit(NodeConstante* node) override {
        cout << node->getValue().getValue() << " ";
    }
    void visit(NodeVariable* node) override {
        cout << node->getValue().getIdent() << " ";
    }
    void visit(NodeOperator* node) override {
        cout << "(";
        node->getLeft()->accept(this);
        cout << node->getOp().getOp() << " ";
        node->getRight()->accept(this);
        cout << ")";
    }


};