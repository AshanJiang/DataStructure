#include "Tree.h"
#include <iostream>
using namespace std;

void InitBiTree(BiTree & T)
{
	T = new BiTNode;
	T->data = 1;
	T->lchild = NULL;
	T->rchild = NULL;
}

void PreOrder(BiTree T)
{
	if (T != NULL) {
		cout << T->data << " ";
		PreOrder(T->lchild);
		PreOrder(T->rchild);
	}
}
