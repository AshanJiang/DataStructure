#pragma once
#pragma once
#include <iostream>
//typedef int ElemType;
typedef char ElemType;

typedef struct BiTNode {
	ElemType data;
	struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;

typedef struct ThreadNode {
	ElemType data;
	struct ThreadNode *lchild, *rchild;
	int ltag=0, rtag=0;
}ThreadNode, *ThreadTree;

void InitBiTree(BiTree &T);
void PreOrder(BiTree T);
void InOrder(BiTree T);
void InThread(ThreadTree &p, ThreadTree &pre);
/*∑«µ›πÈœ»–Ú*/
void PreOrder2(BiTree T);