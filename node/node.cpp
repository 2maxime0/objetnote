//create a node class who contain an operator and two pointer to node
#include "node.h"
#include <stack>
#include "../operator/operator.h"
#include "../constante/constante.h"
#include "../variable/variable.h"



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
        NodeOperator(char op, Node *left, Node *right){
            this->op = Operator(op);
            this->left = left;
            this->right = right;
        };
       
};

class NodeConstante : public Node
{
    private:
        Constante value;

    public:
        NodeConstante(int value){
            this->value = value;
        };
       
};

class NodeVariable : public Node
{
   private:
        Variable value;
    public:
        NodeVariable(char  value){
            this->value = value;
        };
       
};

//create a function who take a string and return a node

// Node* createTree(const std::string& expression){
//     stack<Node*> nodes;
//     stack<Operator> operators;
//     for (char c : expression) {
//         if (c == '+' || c == '-' || c == '*' || c == '/') {
//             // Handle operator
//             Operator op;
//             Node* right = nodes.top();
//             nodes.pop();
//             Node* left = nodes.top();
//             nodes.pop();
//             nodes.push(new NodeOperator(op, left, right));
//             operators.push(op);
//         } else if (isdigit(c)) {
//             // Handle constant
//             Constante constant;
//             nodes.push(new NodeConstante(constant));
//         } else if (isalpha(c)) {
//             // Handle variable
//             Variable variable;
//             nodes.push(new NodeVariable(variable));
//         }
//     }
//     return nodes.top();
// };


