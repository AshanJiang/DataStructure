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