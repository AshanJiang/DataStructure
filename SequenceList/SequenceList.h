#pragma once

#define MaxSize 20
typedef int ElemType;

typedef struct {
	ElemType data[MaxSize];
	int length;
}SqList;

/*��ʼ��������һ���յ����Ա�*/
bool InitList(SqList &L);

/*����˳���ĳ���*/
int Length(SqList L);

/*��˳���L�У����ҵ�һ��Ԫ��ֵ����e��Ԫ�أ�������λ��
ƽ��ʱ�临�Ӷ�O(n)*/
int LocateElem(SqList L, ElemType e);

/*��ȡ��L�е�i��λ�õ�Ԫ�ص�ֵ*/
bool getElem(SqList L, int i, ElemType &e);

/*��˳���L�ĵ�i��λ�ò�����Ԫ��e��
ƽ��ʱ�临�Ӷ�O(n)*/
bool ListInsert(SqList &L, int i, ElemType e);

/*ɾ��˳����е�i��λ�õ�Ԫ�أ�������ɾ����Ԫ����Ӧ�ñ���e���أ�
ƽ��ʱ�临�Ӷ�O(n)*/
bool ListDelete(SqList &L, int i, ElemType &e);

/*��ӡ��*/
void PrintList(SqList L);

/*��LΪ�ձ��򷵻�true�����򷵻�false*/
bool Empty(SqList L);

/*���ٱ�L*/
bool DestroyList(SqList &L);