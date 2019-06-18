#include "Tree.h"
#include <iostream>
#include <stack>
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
