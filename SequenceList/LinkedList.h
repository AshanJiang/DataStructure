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
/*按序号查找节点值*/
LNode *GetElem(LinkList L, int i);
/*按照值查找表节点*/
int LocateElem(LinkList L, ElemType e);
/*将值为x的新节点插入到单链表第i个位置(显然i>0)*/
bool ListInsert(LinkList L, int i, ElemType x);
/*删除第i个节点*/
bool ListDelete(LinkList L, int i);
/*求表长*/
int ListLength(LinkList L);