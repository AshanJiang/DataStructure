#include <iostream>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include "SequenceList.h"
using namespace std;

//�������Ա��������
void SeqListTest() {
	//��ʼ��˳���
	SqList seqList;
	InitList(seqList);
	cout << "��ʼ����L.length=" << Length(seqList) << endl;
	//��������
	for (int i = 1; i <= 5; i++) {
		ListInsert(seqList, i, i);
	}
	cout << "�ڱ�β����1~5֮��L.data=";
	PrintList(seqList);
	//ɾ������
	ElemType e;
	ListDelete(seqList, 2, e);
	cout << "��ɾ��λ��2��Ԫ�غ�L.data=";
	PrintList(seqList);
	cout << "ɾ����Ԫ��e��ֵ=" << e << endl;
	//��������
	cout << "����ֵΪ4��Ԫ��λ��=" << LocateElem(seqList, 4) << endl;
	cout << "����ֵΪ9��Ԫ��λ��=" << LocateElem(seqList, 9) << endl;
	//��ȡԪ��ֵ
	getElem(seqList, 2, e);
	cout << "��2��Ԫ�ص�ֵ=" << e << endl;

	if (Empty(seqList))
		cout << "�ձ�" << endl;
	else
		cout << "�ǿձ�" << endl;
	//����
	DestroyList(seqList);
	cout << "���ٱ�" << endl;
	if (Empty(seqList))
		cout << "�ձ�" << endl;
	else
		cout << "�ǿձ�" << endl;
}

void Test_1() {
	SqList seqList;
	InitList(seqList);
	srand((unsigned)time(NULL));
	for (int i = 1; i <= 5; i++) {
		ListInsert(seqList, i, rand()%100+1);
	}
	cout << "��������������:";
	PrintList(seqList);
	ElemType e;
	DelMin(seqList, e);
	cout << "ɾ����Сֵ��:";
	PrintList(seqList);
}

void Test_2() {
	SqList seqList;
	InitList(seqList);
	srand((unsigned)time(NULL));
	for (int i = 1; i <= 5; i++) {
		ListInsert(seqList, i, rand()%100+1);
	}
	cout << "�������5������:";
	PrintList(seqList);
	Reverse(seqList);
	cout << "�ߵ�˳���:";
	PrintList(seqList);

	InitList(seqList);
	for (int i = 1; i <= 6; i++) {
		ListInsert(seqList, i, rand()%100+1);
	}
	cout << "�������6������:";
	PrintList(seqList);
	Reverse(seqList);
	cout << "�ߵ�˳���:";
	PrintList(seqList);
}

void Test_3() {
	SqList seqList;
	InitList(seqList);
	srand((unsigned)time(NULL));
	for (int i = 1; i <= 10; i++) {
		ListInsert(seqList, i, rand() % 3 + 1);
	}
	cout << "�������10��1~3������:";
	PrintList(seqList);
	DelX(seqList, 2);
	cout << "ɾ��2��:";
	PrintList(seqList);
}

void Test_4() {
	SqList seqList;
	InitList(seqList);
	srand((unsigned)time(NULL));
	for (int i = 1; i <= 20; i++) {
		ListInsert(seqList, i, rand() % 10 + 1);
	}
	sort(seqList.data, seqList.data+20);
	cout << "�������20��1~10�����ݣ�������:" << endl;
	PrintList(seqList);
	Del_s_t(seqList, 3, 5);
	cout << "ɾ��3-5֮�������:" << endl;
	PrintList(seqList);
}

void Test_5() {
	SqList seqList;
	InitList(seqList);
	srand((unsigned)time(NULL));
	for (int i = 1; i <= 20; i++) {
		ListInsert(seqList, i, rand() % 10 + 1);
	}
	cout << "�������20��1~10������:" << endl;
	PrintList(seqList);
	Del_s_t_2(seqList, 3, 5);
	cout << "ɾ��3-5֮�������:" << endl;
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
	cout << "�������10��1~5�����ݲ�����:" << endl;
	PrintList(seqList);
	DeleteSame(seqList);
	cout << "ȥ�غ�:" << endl;
	PrintList(seqList);
}

void Test_7() {
	SqList A,B,C;
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
	cout << "�������5��1~10�����ݲ�����->A:" << endl;
	PrintList(A);
	cout << "�������5��1~10�����ݲ�����->B:" << endl;
	PrintList(B);
	Merge(A, B, C);
	cout << "�ϲ���:" << endl;
	PrintList(C);
}


int main() {
	//SeqListTest();
	//Test_1();
	//Test_2();
	//Test_3();
	//Test_4();
	//Test_5();
	//Test_6();
	Test_7();
}