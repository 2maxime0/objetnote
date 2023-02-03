//create a node class who contain an operator and two pointer to node
#include "node.h"
#include <stack>
#include <string>
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
        NodeOperator(char op, Node *left, Node *right):Node(){
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
        NodeConstante(int value):Node(){
            this->value = value;
        };
       
};

class NodeVariable : public Node
{
   private:
        Variable value;
    public:
        NodeVariable(char  value):Node(){
            this->value = value;
        };
       
};

//create a function who take a string and return a node


Node* buildTreeFromString(const std::string& expression) {
  std::stack<Node*> nodeStack;
  for (int i = 0; i < expression.length(); i++) {
    char c = expression[i];
    if (c == '+' || c == '-' || c == '*' || c == '/') {
      // Create a new operator node
      NodeOperator* op = new NodeOperator(c,nodeStack.top(),nodeStack.top());
    } else {
      // Create a new constant node
      nodeStack.push(new NodeConstante(c - '0'));
    }
  }
  // The final node on the stack is the root of the tree
  return nodeStack.top();
}







