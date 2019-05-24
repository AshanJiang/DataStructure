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

void Reverse(SqList & L)
{
	ElemType temp;
	for (int i = 0; i < L.length / 2; i++) {
		temp = L.data[i];
		L.data[i] = L.data[L.length - i - 1];
		L.data[L.length - i - 1] = temp;
	}
}

void DelX(SqList & L, ElemType x)
{
	int k = 0;
	for (int i = 0; i < L.length; i++) {
		if (L.data[i] == x)
			k++;
		else
			L.data[i - k] = L.data[i];
	}
	L.length -= k;
}

bool Del_s_t(SqList & L, ElemType s, ElemType t)
{
	if (s >= t || L.length == 0)
		return false;
	int i, j, k = 0;
	for (i = 0; i < L.length; i++) {
		if (L.data[i] >= s)
			break;
	}
	if (i >= L.length)
		return false;
	for (j = i; j < L.length; j++) {
		if (L.data[j] > t)
			break;
	}
	k = j - i;
	for (; j < L.length; j++) {
		L.data[j - k] = L.data[j];
	}
	L.length -= k;
	return true;
}

bool Del_s_t_2(SqList & L, ElemType s, ElemType t)
{
	if (s >= t || L.length == 0)
		return false;
	int k = 0;
	for (int i = 0; i < L.length; i++) {
		if (L.data[i] >= s && L.data[i] <= t)
			k++;
		else
			L.data[i - k] = L.data[i];
	}
	L.length -= k;
	return true;
}

bool DeleteSame(SqList & L)
{
	if (L.length == 0)
		return false;
	int i, j;		//i记录非重复元素位置，j扫描表
	for (i = 0, j = 0; j < L.length; j++) {
		if (L.data[i] != L.data[j]) {
			i++;
			L.data[i] = L.data[j];
		}
	}
	L.length = i + 1;
	return true;
}
