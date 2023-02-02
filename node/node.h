//create a node class who contain an operator and two pointer to node
#include "operator.h"
class Node
{
    private:
        Operator op;
        Node *left;
        Node *right;

    public:
        Node(Operator op, Node *left, Node *right);
        int getValue();
};   
