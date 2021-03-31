#include <iostream>
#include "Red_Black_Tree.h"
using namespace std;

int main()
{
	RBTree<int, char> tree;
	tree.Insert(6, 'a');
	tree.Insert(2, 'b');
	tree.Insert(4, 'c');
	tree.Remove(2);
	tree.Insert(8, 'd');
	tree.Insert(3, 'e');
	tree.Insert(5, 'f');
	tree.Print();
}

