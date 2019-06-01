#include "LinkedList.h"
#include <cstdlib>
#include <time.h>
using namespace std;

bool InitList(LinkList & L)
{
	L = new LNode;		//L指向头节点
	L->next = NULL;
	return true;
}

void PrintList(LinkList L)
{
	LinkList p = L->next;		//带头节点
	while (p) {
		std::cout << p->data << " ";
		p = p->next;
	}
	std::cout << std::endl;
}

void List_HeadInsert(LinkList & L, int n)
{
	LinkList p;		//p是新节点的指针
	L = new LNode;		//新建立一个头节点
	L->next = NULL;
	srand((unsigned)time(NULL));
	//std::cout << "头插法随机生成的数据:";
	for (int i = 0; i < n; i++)
	{		//在头节点后插入
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
	//L作为头指针需要一直保持指向头节点，使用r指针不断指向最后的节点
	LinkList p, r;
	L = new LNode;
	r = L;		//初始时r和L指向同一个节点
	srand((unsigned)time(NULL));
	//std::cout << "尾插法随机生成的数据:";
	for (int i = 0; i < n; i++) {
		p = new LNode;
		int num = rand() % 20 + 1;
		//std::cout << num << " ";
		p->data = num;
		r->next = p;
		r = p;		//r移动到新的尾部
	}
	r->next = NULL;
	//cout << endl;
}

LNode * GetElem(LinkList L, int i)
{
	int j = 1;
	LinkList p = L->next;
	if (i == 0)
		return L;		//若i=0，返回头节点
	if (i < 1)
		return NULL;		//无效值
	while (p&&j < i) {			//如果next不为空，且没有到查找位置
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
		return -1;		//没找到
}

bool ListInsert(LinkList L, int i, ElemType x)
{
	LinkList p = GetElem(L, i - 1);		//获得第i-1个节点
	if (!p)
		return false;
	LinkList s = new LNode;		//生成新节点
	s->data = x;
	s->next = p->next;		//新节点连原来i位置的节点
	p->next = s;		//i-1位置的节点连新节点
	return true;
}

bool ListDelete(LinkList L, int i)
{
	LinkList p = GetElem(L, i - 1);
	if (!p)
		return false;
	LinkList q = p->next;		//删除的是q
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
