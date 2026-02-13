// // card_list.h
// // Author: Devesh Mamidi
// // All class declarations related to defining a BST that represents a player's hand

// #ifndef CARD_LIST_H
// #define CARD_LIST_H

// #include "card.h"

// class Card_List {
//     public:
//         Card_List();
//         ~Card_List();
//         void insert(Card &c);
//         void remove(Card &c);
//         bool contains(const Card &c) const;
//         class Iterator {
//             public:
//                 Iterator() : node(nullptr), tree(nullptr) {}
//                 const Card& operator*() const { return node->data; }
//                 const Card* operator->() const { return &(node->data); }

//                 Iterator operator++(int);

//                 Iterator operator--(int);

//                 bool operator==(const Iterator &other) const { return node == other.node; }
//                 bool operator!=(const Iterator &other) const { return node != other.node; }

//             private:
//                 struct Node* node;
//                 Card_List* tree;  
//         };

//         Iterator begin();
//         Iterator end();
//         Iterator rbegin();
//         Iterator rend();

//     private:
//         struct Node {
//             Card data;
//             Node *left, *right, *parent; 
//             Node(const Card& c) : data(c), left(0), right(0), parent(0) { };
//         };
//         Node* root;

//         void deleteTree(Node* n);
//         Node* minimum(Node* n) const;
//         Node* maximum(Node* n) const;
//         Node* successor(Node* n) const;
//         Node* predecessor(Node* n) const;


// };

// #endif
