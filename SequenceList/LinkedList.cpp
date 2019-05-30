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
	std::cout << "ͷ�巨������ɵ�����:";
	for (int i = 0; i < n; i++)
	{		//��ͷ�ڵ�����
		p = new LNode;
		int num = rand() % 100 + 1;
		std::cout << num << " ";
		p->data = num;
		p->next = L->next;
		L->next = p;
	}
	std::cout << std::endl;
}

void List_TailInsert(LinkList & L, int n)
{
	//L��Ϊͷָ����Ҫһֱ����ָ��ͷ�ڵ㣬ʹ��rָ�벻��ָ�����Ľڵ�
	LinkList p, r;
	L = new LNode;
	r = L;		//��ʼʱr��Lָ��ͬһ���ڵ�
	srand((unsigned)time(NULL));
	std::cout << "β�巨������ɵ�����:";
	for (int i = 0; i < n; i++) {
		p = new LNode;
		int num = rand() % 100 + 1;
		std::cout << num << " ";
		p->data = num;
		r->next = p;
		r = p;		//r�ƶ����µ�β��
	}
	r->next = NULL;
	cout << endl;
}
