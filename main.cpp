#include <iostream>
#include <string>
#include <stack>
#include "node/node.h"
using namespace std;

// Node* buildExpressionTree(const string& input) {
//     stack<Node*> nodes;
//     for (char c : input) {
//         if (isdigit(c)) {
//             nodes.push(new NodeConstante(c - '0'));
//         } else if (isalpha(c)) {
//             nodes.push(new NodeVariable(c));
//         } else if (c == '+' || c == '-' || c == '*' || c == '/') {
//             Node* right = nodes.top();
//             nodes.pop();
//             Node* left = nodes.top();
//             nodes.pop();
//             nodes.push(new NodeOperator(Operator(c), left, right));
//         }
//     }
//     return nodes.top();
// }

// void printExpressionTree(Node* node) {
//     if (!node) return;

//     if (NodeConstante* nc = dynamic_cast<NodeConstante*>(node)) {
//         cout << nc->getValue().getValue() << " ";
//     } else if (NodeVariable* nv = dynamic_cast<NodeVariable*>(node)) {
//         cout << nv->getValue().getIdent() << " ";
//     } else if (NodeOperator* no = dynamic_cast<NodeOperator*>(node)) {
//         cout << "(";
//         printExpressionTree(no->getLeft());
//         cout << no->getOp().getOp() << " ";
//         printExpressionTree(no->getRight());
//         cout << ")";
//     }
// }

int main(int argc, char const *argv[])
{
    //take the string with the standard entry
    string input;
    getline(cin, input);

    //print input 
    cout << input << endl;

    //build the tree
    Node* tree = Node::buildExpressionTree(input);
    //Print the tree
    Node::printExpressionTree(tree);

    return 0;
}