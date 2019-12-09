//
// Created by kowusek on 09.12.2019.
//

#include <iostream>
#include "bst.h"

bst::node* bst::minNode( bst::node *node ) {

    struct node* temp = node;

    if( temp == nullptr )
        return temp;

    while ( temp->left != nullptr )
        temp = temp->left;

    return temp;
}

bst::node* bst::delNode( bst::node *root, int key ) {

    if ( root == nullptr )
        return root;

    if ( key < root->key )
        root->left = delNode( root->left, key );

    else if ( root->key < key )
        root->right = delNode( root->right, key );

    else {

        if ( root->left == nullptr ) {

            struct node *temp = root->right;
            free( root );
            return temp;
        }

        else if ( root->right == nullptr ) {

            struct node *temp = root->left;
            free( root );
            return temp;
        }

        struct node* temp = minNode( root->right );

        root->key = temp->key;

        root->right = delNode( root->right, temp->key );
    }
    return root;
}

bst::node* bst::insNode( bst::node *node, int key ) {

    if ( node == nullptr )
        return newNode( key );

    if ( key < node->key )
        node->left  = insNode( node->left, key );

    else
        node->right = insNode( node->right, key );

    return node;
}

bst::node* bst::newNode( int value ) {

    auto *temp =  new struct node;

    temp->key = value;
    temp->left = temp->right = nullptr;

    return temp;
}

void bst::print( bst::node *root ) {

    if ( root != nullptr ) {

        print( root->left );
        std::cout << root->key << " ";
        print( root->right );
    }
}
