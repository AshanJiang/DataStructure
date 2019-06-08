#pragma once
#define MaxSize 20
typedef int ElemType;
typedef struct {
	ElemType data[MaxSize];
	int front, rear;
}SqQueue;
void InitQueue(SqQueue &Q);
bool isEmpty(SqQueue Q);
bool EnQueue(SqQueue &Q, ElemType x);
bool DeQueue(SqQueue &Q, ElemType &x);
void TraverseQueue(SqQueue Q);