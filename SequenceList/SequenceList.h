#pragma once

#define MaxSize 20
typedef int ElemType;

typedef struct {
	ElemType data[MaxSize];
	int length;
}SqList;

/*初始化表。构造一个空的线性表*/
bool InitList(SqList &L);

/*返回顺序表的长度*/
int Length(SqList L);

/*在顺序表L中，查找第一个元素值等于e的元素，返回其位序，
平均时间复杂度O(n)*/
int LocateElem(SqList L, ElemType e);

/*获取表L中第i个位置的元素的值*/
bool getElem(SqList L, int i, ElemType &e);

/*在顺序表L的第i个位置插入新元素e，
平均时间复杂度O(n)*/
bool ListInsert(SqList &L, int i, ElemType e);

/*删除顺序表中第i个位置的元素，并将被删除的元素用应用变量e返回，
平均时间复杂度O(n)*/
bool ListDelete(SqList &L, int i, ElemType &e);

/*打印表*/
void PrintList(SqList L);

/*若L为空表，则返回true，否则返回false*/
bool Empty(SqList L);

/*销毁表L*/
bool DestroyList(SqList &L);

//P18应用题
/*1.删除最小值的元素(假设唯一)，空出位置由最后一个元素填补*/
bool DelMin(SqList &L, ElemType &e);
/*2.逆置L元素，空间复杂度为O(1)*/
void Reverse(SqList &L);
/*3.删除线性表中所有值为x的元素,时间O(n)，空间O(1)*/
void DelX(SqList &L, ElemType x);
/*4.删除有序顺序表中值在s和t之间的所有元素*/
bool Del_s_t(SqList &L, ElemType s, ElemType t);
/*5.删除顺序表中值在s和t之间的所有元素*/
bool Del_s_t_2(SqList &L, ElemType s, ElemType t);
/*6.有序表中删除所有值重复的元素*/
bool DeleteSame(SqList &L);
/*7.合并两个有序顺序表*/
bool Merge(SqList A, SqList B, SqList &C);
/*8.将A[m+n]中依次存放的两个线性表互换
(a1,a2,...am,b1,b2,...bn)->(b1,b2,...bn,a1,a2,...am)*/
void Reverse(int A[], int left, int right, int arraySize);
void Exchange(int A[], int m, int n, int arraySize);