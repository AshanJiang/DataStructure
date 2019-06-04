#include "Stack.h"
#include <iostream>

void InitStack(SqStack & S)
{
	S.top = -1;
}

void ClearStack(SqStack & S)
{
	S.top = -1;
}

bool StackEmpty(SqStack S)
{
	if (S.top == -1)
		return true;
	else
		return false;
}

bool Push(SqStack & S, ElementType x)
{
	if (S.top == MAX_SIZE - 1)		//Õ»Âú
		return false;
	S.top++;
	S.data[S.top] = x;
	return true;
}

bool Pop(SqStack & S, ElementType & x)
{
	if (S.top == -1)
		return false;
	x = S.data[S.top];
	S.top--;
	return true;
}

bool GetTop(SqStack S, ElementType & x)
{
	if (S.top == -1)
		return false;
	x = S.data[S.top];
	return true;
}

void StackTraverse(SqStack S)
{
	int i;
	i = 0;
	while (i <= S.top)
	{
		std::cout << S.data[i++] << " ";
	}
	std::cout << std::endl;
}
