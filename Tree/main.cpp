#include <iostream>
#include "Tree.h"
using namespace std;

int main()
{
	ThreadTree T;
	T = new ThreadNode;
	T->data = 'A';

	T->lchild = new ThreadNode;
	T->rchild = new ThreadNode;

	T->lchild->data = 'B';
	T->rchild->data = 'C';
	
	T->lchild->lchild = new ThreadNode;
	T->lchild->lchild->data = 'D';
	T->lchild->lchild->lchild = NULL;
	T->lchild->lchild->rchild = NULL;

	T->lchild->rchild = new ThreadNode;
	T->lchild->rchild->data = 'E';
	T->lchild->rchild->lchild = NULL;
	T->lchild->rchild->rchild = NULL;

	T->rchild->lchild = NULL;

	T->rchild->rchild = new ThreadNode;
	T->rchild->rchild->data = 'G';
	T->rchild->rchild->lchild = NULL;
	T->rchild->rchild->rchild = NULL;

	ThreadTree pre = NULL;
	InThread(T,pre);

	return 0;
}
