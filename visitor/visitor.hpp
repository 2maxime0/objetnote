// using namespace std;
// #include <iostream>
// #include <string>

// class Visitor {
// public:
//     virtual void visit(NodeConstante* node) = 0;
//     virtual void visit(NodeVariable* node) = 0;
//     virtual void visit(NodeOperator* node) = 0;
// };

// class DisplayVisitor : public Visitor {
//  public:
//   void visit(NodeConstante* node) {
//     cout << node->getValue().getValue() << " ";
//   }
//   void visit(NodeVariable* node) {
//     cout << node->getValue().getIdent() << " ";
//   }
//   void visit(NodeOperator* node) {
//     cout << "(";
//     node->getLeft()->accept(this);
//     cout << node->getOp().getOp() << " ";
//     node->getRight()->accept(this);
//     cout << ")";
//   }
// };

