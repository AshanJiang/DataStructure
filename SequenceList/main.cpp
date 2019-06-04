#include <iostream>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include "SequenceList.h"
#include "LinkedList.h"
using namespace std;

template <typename T, std::size_t N>
void print_array(const T(&a)[N], std::ostream& o = std::cout)
{
	o << "{";
	for (std::size_t i = 0; i < N - 1; ++i)
	{
		o << a[i] << ", ";
	}
	o << a[N - 1] << "}\n";
}

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

//测试链表
void PlayWithLinkedList() {
	LinkList L;
	//List_HeadInsert(L, 10);
	//cout << "头插法生成链表:";
	//PrintList(L);
	List_TailInsert(L, 10);
	cout << "尾部插法生成链表:";
	PrintList(L);
	cout << "查找第0个节点值:" << GetElem(L, 0)->data << endl;
	cout << "查找第5个节点值:" << GetElem(L, 5)->data << endl;
	cout << "查找第12个节点值:" << GetElem(L, 12) << endl;
	cout << "查找数字6的位置:" << LocateElem(L, 6) << endl;
	ListInsert(L, 11, 666);
	cout << "在11位置(最后)插入666:";
	PrintList(L);
	ListInsert(L, 1, 111);
	cout << "在1位置(最前)插入111:";
	PrintList(L);
	ListInsert(L, 3, 333);
	cout << "在3位置插入333:";
	PrintList(L);
	cout << "删除3位置的数:";
	ListDelete(L, 3);
	PrintList(L);
	cout << "数组长度:" << ListLength(L) << endl;
}

void Test_1() {
	SqList seqList;
	InitList(seqList);
	srand((unsigned)time(NULL));
	for (int i = 1; i <= 5; i++) {
		ListInsert(seqList, i, rand() % 100 + 1);
	}
	cout << "随机插入五个数据:";
	PrintList(seqList);
	ElemType e;
	DelMin(seqList, e);
	cout << "删除最小值后:";
	PrintList(seqList);
}

void Test_2() {
	SqList seqList;
	InitList(seqList);
	srand((unsigned)time(NULL));
	for (int i = 1; i <= 5; i++) {
		ListInsert(seqList, i, rand() % 100 + 1);
	}
	cout << "随机插入5个数据:";
	PrintList(seqList);
	Reverse(seqList);
	cout << "颠倒顺序后:";
	PrintList(seqList);

	InitList(seqList);
	for (int i = 1; i <= 6; i++) {
		ListInsert(seqList, i, rand() % 100 + 1);
	}
	cout << "随机插入6个数据:";
	PrintList(seqList);
	Reverse(seqList);
	cout << "颠倒顺序后:";
	PrintList(seqList);
}

void Test_3() {
	SqList seqList;
	InitList(seqList);
	srand((unsigned)time(NULL));
	for (int i = 1; i <= 10; i++) {
		ListInsert(seqList, i, rand() % 3 + 1);
	}
	cout << "随机插入10个1~3的数据:";
	PrintList(seqList);
	DelX(seqList, 2);
	cout << "删除2后:";
	PrintList(seqList);
}

void Test_4() {
	SqList seqList;
	InitList(seqList);
	srand((unsigned)time(NULL));
	for (int i = 1; i <= 20; i++) {
		ListInsert(seqList, i, rand() % 10 + 1);
	}
	sort(seqList.data, seqList.data + 20);
	cout << "随机插入20个1~10的数据，并排序:" << endl;
	PrintList(seqList);
	Del_s_t(seqList, 3, 5);
	cout << "删除3-5之间的数后:" << endl;
	PrintList(seqList);
}

void Test_5() {
	SqList seqList;
	InitList(seqList);
	srand((unsigned)time(NULL));
	for (int i = 1; i <= 20; i++) {
		ListInsert(seqList, i, rand() % 10 + 1);
	}
	cout << "随机插入20个1~10的数据:" << endl;
	PrintList(seqList);
	Del_s_t_2(seqList, 3, 5);
	cout << "删除3-5之间的数后:" << endl;
	PrintList(seqList);
}

void Test_6() {
	SqList seqList;
	InitList(seqList);
	srand((unsigned)time(NULL));
	for (int i = 1; i <= 10; i++) {
		ListInsert(seqList, i, rand() % 5 + 1);
	}
	sort(seqList.data, seqList.data + 10);
	cout << "随机插入10个1~5的数据并排序:" << endl;
	PrintList(seqList);
	DeleteSame(seqList);
	cout << "去重后:" << endl;
	PrintList(seqList);
}

void Test_7() {
	SqList A, B, C;
	InitList(A);
	InitList(B);
	InitList(C);
	srand((unsigned)time(NULL));
	for (int i = 1; i <= 5; i++) {
		ListInsert(A, i, rand() % 10 + 1);
		ListInsert(B, i, rand() % 10 + 1);
	}
	sort(A.data, A.data + 5);
	sort(B.data, B.data + 5);
	cout << "随机插入5个1~10的数据并排序->A:" << endl;
	PrintList(A);
	cout << "随机插入5个1~10的数据并排序->B:" << endl;
	PrintList(B);
	Merge(A, B, C);
	cout << "合并后:" << endl;
	PrintList(C);
}

void Test_8() {
	int A[] = { 1,2,3,7,8,9,10 };
	Exchange(A, 3, 4, 7);
	print_array(A);
}

void Test_9() {
	int A[10] = { 2,5,8,9,12,15 };
	int B[10] = { 2,5,8,9,12,15 };
	int C[10] = { 2,5,8,9,12,15 };
	int D[10] = { 2,5,8,9,12,15 };
	print_array(A);
	SearchExchangeInsert(A, 6, 10);
	SearchExchangeInsert(B, 6, 1);
	SearchExchangeInsert(C, 6, 20);
	SearchExchangeInsert(D, 6, 8);
	print_array(A);
	print_array(B);
	print_array(C);
	print_array(D);
}


int main() {
	//SeqListTest();
	PlayWithLinkedList();
	//Test_1();
	//Test_2();
	//Test_3();
	//Test_4();
	//Test_5();
	//Test_6();
	//Test_7();
	//Test_8();
	//Test_9();
	short x = 32767, y = x+1;
	cout << x << y;
}
