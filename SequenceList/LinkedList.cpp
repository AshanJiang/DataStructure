#include "LinkedList.h"
#include <cstdlib>
#include <time.h>
using namespace std;

bool InitList(LinkList & L)
{
	L = new LNode;		//Lָ��ͷ�ڵ�
	L->next = NULL;
	return true;
}

void PrintList(LinkList L)
{
	LinkList p = L->next;		//��ͷ�ڵ�
	while (p) {
		std::cout << p->data << " ";
		p = p->next;
	}
	std::cout << std::endl;
}

void List_HeadInsert(LinkList & L, int n)
{
	LinkList p;		//p���½ڵ��ָ��
	L = new LNode;		//�½���һ��ͷ�ڵ�
	L->next = NULL;
	srand((unsigned)time(NULL));
	//std::cout << "ͷ�巨������ɵ�����:";
	for (int i = 0; i < n; i++)
	{		//��ͷ�ڵ�����
		p = new LNode;
		int num = rand() % 100 + 1;
		//std::cout << num << " ";
		p->data = num;
		p->next = L->next;
		L->next = p;
	}
	//std::cout << std::endl;
}

void List_TailInsert(LinkList & L, int n)
{
	//L��Ϊͷָ����Ҫһֱ����ָ��ͷ�ڵ㣬ʹ��rָ�벻��ָ�����Ľڵ�
	LinkList p, r;
	L = new LNode;
	r = L;		//��ʼʱr��Lָ��ͬһ���ڵ�
	srand((unsigned)time(NULL));
	//std::cout << "β�巨������ɵ�����:";
	for (int i = 0; i < n; i++) {
		p = new LNode;
		int num = rand() % 20 + 1;
		//std::cout << num << " ";
		p->data = num;
		r->next = p;
		r = p;		//r�ƶ����µ�β��
	}
	r->next = NULL;
	//cout << endl;
}

LNode * GetElem(LinkList L, int i)
{
	int j = 1;
	LinkList p = L->next;
	if (i == 0)
		return L;		//��i=0������ͷ�ڵ�
	if (i < 1)
		return NULL;		//��Чֵ
	while (p&&j < i) {			//���next��Ϊ�գ���û�е�����λ��
		p = p->next;
		j++;
	}
	return p;
}

int LocateElem(LinkList L, ElemType e)
{
	LinkList p = L->next;
	int i = 1;
	while (p != NULL && p->data != e) {
		p = p->next;
		i++;
	}
	if (p)
		return i;
	else
		return -1;		//û�ҵ�
}

bool ListInsert(LinkList L, int i, ElemType x)
{
	LinkList p = GetElem(L, i - 1);		//��õ�i-1���ڵ�
	if (!p)
		return false;
	LinkList s = new LNode;		//�����½ڵ�
	s->data = x;
	s->next = p->next;		//�½ڵ���ԭ��iλ�õĽڵ�
	p->next = s;		//i-1λ�õĽڵ����½ڵ�
	return true;
}

bool ListDelete(LinkList L, int i)
{
	LinkList p = GetElem(L, i - 1);
	if (!p)
		return false;
	LinkList q = p->next;		//ɾ������q
	p->next = q->next;
	delete q;
	return true;
}

int ListLength(LinkList L)
{
	LinkList p = L->next;
	int i = 0;
	while (p)
	{
		p = p->next;
		i++;
	}
	return i;
}
