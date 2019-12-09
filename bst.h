//
// Created by kowusek on 09.12.2019.
//

#ifndef BST_BST_H
#define BST_BST_H

#include<cstdio>
#include<cstdlib>


class bst {

public:

    struct node
    {
        int key;
        struct node* left;
        struct node* right;
    };

    static struct node* minNode( struct node* node );

    static struct node* delNode( struct node* root, int key );

    static struct node* insNode( struct node* node, int key );

    static struct node* newNode( int value );

    static void print( struct node *root );
};



#endif //BST_BST_H
