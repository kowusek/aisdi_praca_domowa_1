#include <iostream>
#include "bst.h"

int main() {

    struct bst::node *root = nullptr;

    root = bst::insNode( root, 2 );
    root = bst::insNode( root, 4 );
    root = bst::insNode( root, 3 );
    root = bst::insNode( root, 5 );
    root = bst::insNode( root, 8 );
    root = bst::insNode( root, 7 );
    root = bst::insNode( root, 9 );
    root = bst::insNode( root, 1 );
    root = bst::insNode( root, 6 );

    bst::print( root );
    std::cout << std::endl;
    root = bst::delNode( root, 2 );
    bst::print( root );
    std::cout << std::endl;
    root = bst::delNode( root, 6 );
    bst::print( root );
    std::cout << std::endl;
    root = bst::delNode( root, 4 );
    bst::print( root );
    std::cout << std::endl;

    return 0;
}