#include <iostream>
#include <string>
#include <stack>
#include "node/node.h"
using namespace std;


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