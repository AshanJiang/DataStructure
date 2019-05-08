#include <iostream>
using namespace std;

#define MaxSize 20

typedef int ElemType;

typedef struct {
	ElemType data[MaxSize];
	int length;
}SqList;

/*初始化表。构造一个空的线性表*/
bool InitList(SqList &L) {
	L.length = 0;
	return true;
}
/*返回顺序表的长度*/
int Length(SqList L) {
	return L.length;
}
/*在顺序表L中，查找第一个元素值等于e的元素，返回其位序，
平均时间复杂度O(n)*/
int LocateElem(SqList L, ElemType e) {
	for (int i = 0; i < L.length; i++) {
		if (L.data[i] == e) {
			return i + 1;
		}
	}
	return -1;
}
/*获取表L中第i个位置的元素的值*/
bool getElem(SqList L, int i, ElemType &e) {
	if (i<1 || i>L.length)
		return false;
	e = L.data[i - 1];
	return true;
}
/*在顺序表L的第i个位置插入新元素e，
平均时间复杂度O(n)*/
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
/*删除顺序表中第i个位置的元素，并将被删除的元素用应用变量e返回，
平均时间复杂度O(n)*/
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
		cout << L.data[i] << " ";
	}
	cout << endl;
}
/*若L为空表，则返回true，否则返回false*/
bool Empty(SqList L) {
	if (L.length == 0)
		return true;
	return false;
}
/*销毁表L*/
bool DestroyList(SqList &L) {
	L.length = 0;
	return true;
}
int main() {
	//初始化顺序表
	SqList seqList;
	InitList(seqList);
	cout << "初始化后L.length=" << Length(seqList) << endl;
	//插入数据
	for (int i = 1; i <= 5; i++) {
		ListInsert(seqList, i, i);
	}
	cout << "在表尾插入1~5之后，L.data=";
	PrintList(seqList);
	//删除数据
	ElemType e;
	ListDelete(seqList, 2, e);
	cout << "在删除位置2的元素后，L.data=";
	PrintList(seqList);
	cout << "删除的元素e的值=" << e << endl;
	//查找数据
	cout << "查找值为4的元素位序=" << LocateElem(seqList, 4) << endl;
	cout << "查找值为9的元素位序=" << LocateElem(seqList, 9) << endl;
	//获取元素值
	getElem(seqList, 2, e);
	cout << "第2号元素的值=" << e << endl;
	
	if (Empty(seqList))
		cout << "空表" << endl;
	else
		cout << "非空表" << endl;
	//销毁
	DestroyList(seqList);
	cout << "销毁表" << endl;
	if (Empty(seqList))
		cout << "空表" << endl;
	else
		cout << "非空表" << endl;

}