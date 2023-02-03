//take a string with the standard entry 
//and return a string with the standard exit
//the standard entry is a string with the following format:
using namespace std;
#include <iostream>
#include <string>
#include <stack>
#include "node/node.h"
#include "operator/operator.h"
#include "constante/constante.h"
#include "variable/variable.h"

int main(int argc, char const *argv[])
{
    //take the string with the standard entry
    string input;
    getline(cin, input);
    
   //createTree(input);

    //print input 
    cout << input << endl;
    //Constante c(1);

    

    return 0;
}

// //create a function who take a string and return a node





// Node* createTree(const std::string& expression) {
//   stack<Node*> nodes;
//   stack<NodeOperator::Operator> operators;
//   for (char c : expression) {
//     if (c == '+' || c == '-' || c == '*' || c == '/') {
//       // Handle operator
//       NodeOperator::Operator op;
//       Node* right = nodes.top();
//       nodes.pop();
//       Node* left = nodes.top();
//       nodes.pop();
//       nodes.push(new NodeOperator(op, left, right));
//       operators.push(op);
//     } else if (isdigit(c)) {
//       // Handle constant
//       NodeConstant::Constant constant;
//       nodes.push(new NodeConstant(constant));
//     } else if (isalpha(c)) {
//       // Handle variable
//       NodeVariable::Variable variable;
//       nodes.push(new NodeVariable(variable));
//     }
//   }
//   return nodes.top();
// }

// void printTree(Node* root) {
//   if (root == nullptr) {
//     return;
//   }
//   if (NodeOperator* node = dynamic_cast<NodeOperator*>(root)) {
//     std::cout << "Operator: " << node->op_ << std::endl;
//     printTree(node->left_);
//     printTree(node->right_);
//   } else if (NodeConstant* node = dynamic_cast<NodeConstant*>(root)) {
//     std::cout << "Constant: " << node->constant_ << std::endl;
//   } else if (NodeVariable* node = dynamic_cast<NodeVariable*>(root)) {
//     std::cout << "Variable: " << node->variable_ << std::endl;
//   }
//}



