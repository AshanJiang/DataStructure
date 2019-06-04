#pragma once
#define MAX_SIZE 50
typedef int ElementType;
typedef struct {
	ElementType data[MAX_SIZE];
	int top;		// 栈顶指针
}SqStack;		//顺序栈
/*初始化栈*/
void InitStack(SqStack &S);
/*销毁栈*/
void ClearStack(SqStack &S);
/*栈判空*/
bool StackEmpty(SqStack S);
/*进栈*/
bool Push(SqStack &S, ElementType x);
/*出栈*/
bool Pop(SqStack &S, ElementType &x);
/*读栈顶元素*/
bool GetTop(SqStack S, ElementType &x);
/*打印元素*/
void StackTraverse(SqStack S);
