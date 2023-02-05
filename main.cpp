#include <iostream>
#include <string>
#include <stack>
#include <cassert>
#include "node/node.h"
using namespace std;

int main(int argc, char const *argv[])
{
    bool run = true;

    while (run )
    {
        cout<<"Entrez une expression en polonaise inversé , test pou rlancer les assert ou 'q' pour quitter"<<endl;

    string input;
    getline(cin, input);

    if (input == "q")
    {
        run = false;
    }
    else if (input == "test")
    {

           //-- TESTS SUPPLEMENTAIRES --//

    //Test1
    string input1 = "1";
    Node *tree1 = Node::buildExpressionTree(input1);
    assert(dynamic_cast<NodeConstante *>(tree1)->getValue().getValue() == 1);

    //Test2
    string input2 = "x";
    Node *tree2 = Node::buildExpressionTree(input2);
    assert(dynamic_cast<NodeVariable *>(tree2)->getValue().getIdent() == 'x');

    //Test3
    string input3 = "1 2 +";
    Node *tree3 = Node::buildExpressionTree(input3);
    NodeOperator *no3 = dynamic_cast<NodeOperator *>(tree3);
    assert(no3->getOp().getOp() == '+');
    assert(dynamic_cast<NodeConstante *>(no3->getLeft())->getValue().getValue() == 1);
    assert(dynamic_cast<NodeConstante *>(no3->getRight())->getValue().getValue() == 2);

    //Test4
    string input4 = "x 2 3 * + 4 5 - /";
    Node *tree4 = Node::buildExpressionTree(input4);
    NodeOperator *no4 = dynamic_cast<NodeOperator *>(tree4);
    assert(no4->getOp().getOp() == '/');
    NodeOperator *no4_right = dynamic_cast<NodeOperator *>(no4->getRight());
    assert(no4_right->getOp().getOp() == '-');
    assert(dynamic_cast<NodeConstante *>(no4_right->getLeft())->getValue().getValue() == 4);
    assert(dynamic_cast<NodeConstante *>(no4_right->getRight())->getValue().getValue() == 5);
    NodeOperator *no4_left = dynamic_cast<NodeOperator *>(no4->getLeft());
    assert(no4_left->getOp().getOp() == '+');
    NodeOperator *no4_left_right = dynamic_cast<NodeOperator *>(no4_left->getRight());
    assert(no4_left_right->getOp().getOp() == '*');
    assert(dynamic_cast<NodeConstante *>(no4_left_right->getLeft())->getValue().getValue() == 2);
    assert(dynamic_cast<NodeConstante *>(no4_left_right->getRight())->getValue().getValue() == 3);
    assert(dynamic_cast<NodeVariable *>(no4_left->getLeft())->getValue().getIdent() == 'x');


        
    }
    else
    {

    //AFFICHAGE ENTREE
    cout << input << endl;

    //RESOLUTION
    Node *tree = Node::buildExpressionTree(input);
    Node::printExpressionTree(tree);
    cout<<endl;
        


    }
    



 

}

    return 0;
}