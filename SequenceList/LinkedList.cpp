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
	std::cout << "头插法随机生成的数据:";
	for (int i = 0; i < n; i++)
	{		//在头节点后插入
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
	//L作为头指针需要一直保持指向头节点，使用r指针不断指向最后的节点
	LinkList p, r;
	L = new LNode;
	r = L;		//初始时r和L指向同一个节点
	srand((unsigned)time(NULL));
	std::cout << "尾插法随机生成的数据:";
	for (int i = 0; i < n; i++) {
		p = new LNode;
		int num = rand() % 100 + 1;
		std::cout << num << " ";
		p->data = num;
		r->next = p;
		r = p;		//r移动到新的尾部
	}
	r->next = NULL;
	cout << endl;
}
