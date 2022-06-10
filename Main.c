#define _CRT_SECURE_NO_WARNINGS
#include "TreePrintLibrary.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "BST.h"


void main() {
	BST bst;
	initBST(&bst);
	insertBST(&bst, 33);
	insertBST(&bst, 15);
	insertBST(&bst, 55);
	insertBST(&bst, 16);
	insertBST(&bst, 45);
	insertBST(&bst, 4);

	print_ascii_tree(bst.root);
	printTreeInorder(&bst);
	printf("\n~~~~~~~~~~~");
	printf("\nThe number of roots is %d\n", CountRoots(&bst.root));
	printf("\n~~~~~~~~~~~");
	int temp = findIndexNFromLast(&bst, 5);
	if (temp) {
		printf("\nThe number is sits from the last number %d\n", temp);
		printf("\n~~~~~~~~~~~");
	}

	if (sameHeightLeaves(&bst.root)) {
		printf("\nThe tree is equel for all the paths\n");
		printf("\n~~~~~~~~~~~");
	}
	else printf("\nNot all the tree paths has the same amount of paths\n");

	destroyBST(&bst);

}
