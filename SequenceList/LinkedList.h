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
/*����Ų��ҽڵ�ֵ*/
LNode *GetElem(LinkList L, int i);
/*����ֵ���ұ�ڵ�*/
int LocateElem(LinkList L, ElemType e);
/*��ֵΪx���½ڵ���뵽�������i��λ��(��Ȼi>0)*/
bool ListInsert(LinkList L, int i, ElemType x);
/*ɾ����i���ڵ�*/
bool ListDelete(LinkList L, int i);
/*���*/
int ListLength(LinkList L);