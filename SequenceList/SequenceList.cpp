#include "SequenceList.h"
#include <iostream>

bool InitList(SqList &L) {
	L.length = 0;
	return true;
}

int Length(SqList L) {
	return L.length;
}

int LocateElem(SqList L, ElemType e) {
	for (int i = 0; i < L.length; i++) {
		if (L.data[i] == e) {
			return i + 1;
		}
	}
	return -1;
}

bool getElem(SqList L, int i, ElemType &e) {
	if (i<1 || i>L.length)
		return false;
	e = L.data[i - 1];
	return true;
}

bool ListInsert(SqList &L, int i, ElemType e) {
	if (i<1 || i>L.length + 1) {						//判断插入位置i是否有效
		return false;
	}
	if (L.length >= MaxSize) {					//判断存储空间是否已满
		return false;
	}
	for (int j = L.length; j >= i; j--) {			//将位置i之后的元素全部后移，从最后一个元素开始
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = e;											//在位置i处放入e
	L.length++;
	return true;
}

bool ListDelete(SqList &L, int i, ElemType &e) {
	if (i<1 || i>L.length) {							//判断i的范围是否有效
		return false;
	}
	e = L.data[i - 1];									//将被删除的元素赋值给e
	for (int j = i; j < L.length; j++) {			//将被删除元素(位置i)后的元素前移
		L.data[j - 1] = L.data[j];
	}
	L.length--;
	return true;
}

void PrintList(SqList L) {
	for (int i = 0; i < L.length; i++) {
		std::cout << L.data[i] << " ";
	}
	std::cout << std::endl;
}

bool Empty(SqList L) {
	if (L.length == 0)
		return true;
	return false;
}

bool DestroyList(SqList &L) {
	L.length = 0;
	return true;
}

bool DelMin(SqList & L, ElemType &e)
{
	if (L.length == 0) {
		return false;
	}
	e = L.data[0];
	int pos = 0;
	for (int i = 1; i < L.length; i++) {
		if (L.data[i] < e) {
			e = L.data[i];
			pos = i;
		}
	}
	L.data[pos] = L.data[L.length - 1];
	L.length--;
	return true;
}
