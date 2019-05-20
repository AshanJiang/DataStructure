#include <iostream>
#include <cstdlib>
#include <time.h>
#include "SequenceList.h"
using namespace std;

//测试线性表基本功能
void SeqListTest() {
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

void Test_1() {
	SqList seqList;
	InitList(seqList);
	srand(time(NULL));
	for (int i = 1; i <= 5; i++) {
		ListInsert(seqList, i, rand()%100+1);
	}
	cout << "随机插入五个数据:";
	PrintList(seqList);
	ElemType e;
	DelMin(seqList, e);
	cout << "删除最小值后:";
	PrintList(seqList);
}

int main() {
	//SeqListTest();
	Test_1();
}