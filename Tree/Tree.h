#pragma once
#pragma once
#include <iostream>
typedef int ElemType;

typedef struct BiTNode {
	ElemType data;
	struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;
void InitBiTree(BiTree &T);
void PreOrder(BiTree T);