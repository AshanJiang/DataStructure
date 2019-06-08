#include "Queue.h"
#include <iostream>
using namespace std;

void InitQueue(SqQueue & Q)
{
	Q.front = Q.rear = 0;
}

bool isEmpty(SqQueue Q)
{
	if (Q.front == Q.rear)
		return true;
	else
		return false;
}

bool EnQueue(SqQueue & Q, ElemType x)
{
	if ((Q.rear + 1) % MaxSize == Q.front)
		return false;
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear + 1) % MaxSize;
	return true;
}

bool DeQueue(SqQueue & Q, ElemType & x)
{
	if (isEmpty(Q))
		return false;
	x = Q.data[Q.front];
	Q.front = (Q.front + 1) % MaxSize;
	return true;
}

void TraverseQueue(SqQueue Q)
{
	int i = Q.front;
	while (i != Q.rear) {		//到达尾部则退出
		cout << Q.data[i] << " ";
		i = (i + 1) % MaxSize;
	}
	cout << endl;
}
