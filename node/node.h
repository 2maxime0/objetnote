#include <string>
#include "../operator/operator.h"
#include "../constante/constante.h"
#include "../variable/variable.h"
using namespace std;
class Node
{ 
    public:
        Node();
        virtual ~Node() {}
        static Node* buildExpressionTree(const string& input);
        static void printExpressionTree(Node* node);
       
};   

class NodeOperator : public Node
{
    private:
        Operator op;
        Node *left;
        Node *right;

    public:
        NodeOperator(Operator op, Node *left, Node *right);
        Operator getOp();
        Node* getLeft();
        Node* getRight();
       
};

class NodeConstante : public Node
{
    private:
        Constante value;

    public:
        NodeConstante(int value);
        Constante getValue();
       
};

class NodeVariable : public Node
{
    private:
        Variable value;
    public:
        NodeVariable(char  value);
        Variable getValue();
       
};

