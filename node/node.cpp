#include "operator.h"
class Node
{
    private:
        Operator op;
        Node *left;
        Node *right;

    public:
        Node(Operator op, Node *left, Node *right);
        int getValue(){
            return op.operate(left->getValue(), right->getValue());
        };
};   