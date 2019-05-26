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

//P18Ӧ����
/*1.ɾ����Сֵ��Ԫ��(����Ψһ)���ճ�λ�������һ��Ԫ���*/
bool DelMin(SqList &L, ElemType &e);
/*2.����LԪ�أ��ռ临�Ӷ�ΪO(1)*/
void Reverse(SqList &L);
/*3.ɾ�����Ա�������ֵΪx��Ԫ��,ʱ��O(n)���ռ�O(1)*/
void DelX(SqList &L, ElemType x);
/*4.ɾ������˳�����ֵ��s��t֮�������Ԫ��*/
bool Del_s_t(SqList &L, ElemType s, ElemType t);
/*5.ɾ��˳�����ֵ��s��t֮�������Ԫ��*/
bool Del_s_t_2(SqList &L, ElemType s, ElemType t);
/*6.�������ɾ������ֵ�ظ���Ԫ��*/
bool DeleteSame(SqList &L);
/*7.�ϲ���������˳���*/
bool Merge(SqList A, SqList B, SqList &C);
/*8.��A[m+n]�����δ�ŵ��������Ա���
(a1,a2,...am,b1,b2,...bn)->(b1,b2,...bn,a1,a2,...am)*/
void Reverse(int A[], int left, int right, int arraySize);
void Exchange(int A[], int m, int n, int arraySize);