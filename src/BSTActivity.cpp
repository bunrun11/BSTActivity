//============================================================================
// Name        : BSTActivity.cpp
// Author      : Job
// Date		   : 10/30/2017
// Description : BinarySearchTree Activity
//============================================================================

#include <iostream>
#include "BinarySearchTree.h"
using namespace std;


int main() {
	//create binary search tree object
	BinarySearchTree<int> bst;

	//insert numbers into tree
	int input;
	while(true){
		cout<<"Enter a number(0 to exit):";
		cin>>input;
		if(input == 0){
			break;
		}
		bst.insert(*new int(input));
	}

	//display the content of tree using inorder traversal
	cout<<"inorder traversal: ";
	bst.inOrder();
	cout<<endl;

	//display the content of tree using preorder traversal
	cout<<"preorder traversal: ";
	bst.preOrder();
	cout<<endl;

	//display the content of tree using postorder traversal
	cout<<"postorder traversal: ";
	bst.postOrder();
	cout<<endl;

	//print the number of nodes
	cout<<"Node count: "<<bst.nodeCount()<<endl;

	//print the number of leaves
	cout<<"Leaves count: "<<bst.leaveCount()<<endl;

	//print the height of the tree
	cout<<"Height: "<<bst.height()<<endl;
       return 0;
}

