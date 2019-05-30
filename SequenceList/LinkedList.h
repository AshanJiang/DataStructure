#pragma once
#include <iostream>
typedef int ElemType;

typedef struct LNode {
	ElemType data;
	struct LNode *next;
}LNode, *LinkList;			//LinkList是LNode(链表节点)类型的指针
/*新建链表*/
bool InitList(LinkList &L);
/*输出链表*/
void PrintList(LinkList L);
/*头插法建立单链表,n表示插入数据的数目*/
void List_HeadInsert(LinkList &L, int n);
/*尾插法*/
void List_TailInsert(LinkList &L, int n);