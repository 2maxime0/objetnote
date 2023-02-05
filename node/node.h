//create a node class who contain an operator and two pointer to node
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
       
};   

class NodeOperator : public Node
{
    private:
        Operator op;
        Node *left;
        Node *right;

    public:
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
        NodeConstante(int value);
        //getters
        Constante getValue();
       
};

class NodeVariable : public Node
{
    private:
        Variable value;
    public:
        NodeVariable(char  value);
        //getters
        Variable getValue();
       
};
