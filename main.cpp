//take a string with the standard entry 
//and return a string with the standard exit
//the standard entry is a string with the following format:
using namespace std;
#include <iostream>
#include <string>
#include <stack>
#include "node.h"

int main(int argc, char const *argv[])
{
    //take the string with the standard entry
    string input;
    getline(cin, input);

    //print input 
    cout << input << endl;

    Node* tree = parseExpression(input);
    printExpression(tree);

    return 0;
}

Node *parseExpression(const std::string &expression) {
    std::stack<Node *> operands;
    std::stack<char> operators;
    for (int i = 0; i < expression.size(); i++) {
        char c = expression[i];
        if (c >= '0' && c <= '9') {
            int j = i;
            while (j < expression.size() && expression[j] >= '0' && expression[j] <= '9') {
                j++;
            }
            operands.push(new NodeConstante(std::stoi(expression.substr(i, j - i))));
            i = j - 1;
        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            while (!operators.empty() && operators.top() != '(') {
                char op = operators.top();
                operators.pop();
                Node *right = operands.top();
                operands.pop();
                Node *left = operands.top();
                operands.pop();
                operands.push(new NodeOperator(op, left, right));
            }
            operators.push(c);
        } else if (c == '(') {
            operators.push(c);
        } else if (c == ')') {
            while (operators.top() != '(') {
                char op = operators.top();
                operators.pop();
                Node *right = operands.top();
                operands.pop();
                Node *left = operands.top();
                operands.pop();
                operands.push(new NodeOperator(op, left, right));
            }
            operators.pop();
        } else {
            operands.push(new NodeVariable(c));
        }
    }
    while (!operators.empty()) {
        char op = operators.top();
        operators.pop();
        Node *right = operands.top();
        operands.pop();
        Node *left = operands.top();
        operands.pop();
        operands.push(new NodeOperator(op, left, right));
    }
    return operands.top();
}

void printExpression(Node* node) {
    if (NodeConstante* constanteNode = dynamic_cast<NodeConstante*>(node)) {
        cout << constanteNode->value->getValue() << " ";
    } else if (NodeOperator* operatorNode = dynamic_cast<NodeOperator*>(node)) {
        cout << "(";
        printExpression(operatorNode->getLeft());
        cout << operatorNode->getOp().getOp() << " ";
        printExpression(operatorNode->getRight());
        cout << ")";
    }
}