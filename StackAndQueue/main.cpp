#include <iostream>
#include "Stack.h"
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
	cout << "出栈会栈底到栈顶元素为:";
	StackTraverse(s);
}

int main()
{
	PlayWithSqStack();
}