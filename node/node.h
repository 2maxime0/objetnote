//create a node class who contain an operator and two pointer to node
#include <string>
#include "../operator/operator.h"
#include "../constante/constante.h"
#include "../variable/variable.h"
#include "../visitor/visitor.h"
using namespace std;
class Node
{ 
    public:
        Node();
        virtual ~Node() {}
        static Node* buildExpressionTree(const string& input);
        static void printExpressionTree(Node* node);
         virtual void accept(Visitor* visitor) = 0;
       
};   

class NodeOperator : public Node
{
    private:
        Operator op;
        Node *left;
        Node *right;

    public:
        void accept(Visitor* visitor) override {
            visitor->visit(this);
        }
        NodeOperator(Operator op, Node *left, Node *right);
        //getters
        Operator getOp();
        Node* getLeft();
        Node* getRight();
       
};

class NodeConstante : public Node
{
    private:
        Constante value;

    public:
        void accept(Visitor* visitor) override {
            visitor->visit(this);
        }
        NodeConstante(int value);
        //getters
        Constante getValue();
       
};

class NodeVariable : public Node
{
    private:
        Variable value;
    public:
        void accept(Visitor* visitor) override {
            visitor->visit(this);
        }
        NodeVariable(char  value);
        //getters
        Variable getValue();
       
};

