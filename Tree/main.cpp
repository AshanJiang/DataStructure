#include <iostream>
#include "Tree.h"
using namespace std;

int main()
{
	BiTree T;
	InitBiTree(T);
	T->lchild = new BiTNode;
	T->rchild = new BiTNode;

	T->lchild->data = 2;
	T->lchild->lchild = NULL;
	T->lchild->rchild = new BiTNode;

	T->rchild = new BiTNode;
	T->rchild->data = 3;
	T->rchild->lchild = NULL;
	T->rchild->rchild = new BiTNode;

	T->rchild->rchild->data = 5;
	T->rchild->rchild->lchild = NULL;
	T->rchild->rchild->rchild = NULL;


	T->lchild->rchild->data =  4;
	T->lchild->rchild->lchild = new BiTNode;
	T->lchild->rchild->rchild = NULL;

	T->lchild->rchild->lchild->data = 6;
	T->lchild->rchild->lchild->lchild = NULL;
	T->lchild->rchild->lchild->rchild = NULL;

	PreOrder(T);

	return 0;
}
