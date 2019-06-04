#pragma once
#define MAX_SIZE 50
typedef int ElementType;
typedef struct {
	ElementType data[MAX_SIZE];
	int top;		// ջ��ָ��
}SqStack;		//˳��ջ
/*��ʼ��ջ*/
void InitStack(SqStack &S);
/*����ջ*/
void ClearStack(SqStack &S);
/*ջ�п�*/
bool StackEmpty(SqStack S);
/*��ջ*/
bool Push(SqStack &S, ElementType x);
/*��ջ*/
bool Pop(SqStack &S, ElementType &x);
/*��ջ��Ԫ��*/
bool GetTop(SqStack S, ElementType &x);
/*��ӡԪ��*/
void StackTraverse(SqStack S);
