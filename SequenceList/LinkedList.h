#pragma once
#include <iostream>
typedef int ElemType;

typedef struct LNode {
	ElemType data;
	struct LNode *next;
}LNode, *LinkList;			//LinkList��LNode(����ڵ�)���͵�ָ��
/*�½�����*/
bool InitList(LinkList &L);
/*�������*/
void PrintList(LinkList L);
/*ͷ�巨����������,n��ʾ�������ݵ���Ŀ*/
void List_HeadInsert(LinkList &L, int n);
/*β�巨*/
void List_TailInsert(LinkList &L, int n);