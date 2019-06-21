#include "Tree.h"
#include <iostream>
#include <stack>
using namespace std;

void InitBiTree(BiTree & T)
{
	T = new BiTNode;
	//T->data = 1;
	T->data = 'A';
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

void InOrder(BiTree T)
{
	if (T != NULL) {
		InOrder(T->lchild);
		cout << T->data << " ";
		InOrder(T->rchild);
	}
}

void InThread(ThreadTree & p, ThreadTree & pre)
{
	if (p != NULL) {
		InThread(p->lchild, pre);
		if (p->lchild == NULL) {
			p->lchild = pre;
			p->ltag = 1;
		}
		if (pre != NULL && pre->rchild == NULL) {
			pre->rchild = p;
			pre->rtag = 1;
		}
		pre = p;
		InThread(p->rchild, pre);
	}
}

void PreOrder2(BiTree T)
{
	stack<BiTree> S;
	BiTree p = T;
	while (p || !S.empty()) {
		if (p) {
			cout << p->data << " ";
			S.push(p);
			p = p->lchild;
		}
		else {
			p = S.top();
			S.pop();
			p = p->rchild;
		}
	}
}
