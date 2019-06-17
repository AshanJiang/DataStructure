#include <iostream>
#include "Stack.h"
#include "Queue.h"
using namespace std;

void PlayWithSqStack() {
	SqStack s;
	InitStack(s);
	for (size_t i = 1; i < 6; i++)
	{
		cout << "入栈:" << i << endl;
		Push(s, i);
	}
	cout << "入栈后栈底到栈顶元素为:";
	StackTraverse(s);
	int x;
	for (size_t i = 0; i < 2; i++)
	{
		Pop(s, x);
		cout << "出栈:" << x<<endl;
	}
	cout << "出栈后栈底到栈顶元素为:";
	StackTraverse(s);
}

void PlayWithQueue() {
	SqQueue sq;
	InitQueue(sq);
	for (size_t i = 1; i < 50; i++)
	{
		cout << "入队:" << i << endl;
		if (!EnQueue(sq, i))
			break;
	}
	cout << "目前队列为:";
	TraverseQueue(sq);
	int x;
	DeQueue(sq, x);
 	cout << "出队元素为:" << x<<endl;
	cout << "目前队列为:";
	TraverseQueue(sq);
}

int main()
{
	//PlayWithSqStack();
	PlayWithQueue();
}