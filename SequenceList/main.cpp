#include <iostream>
#include <cstdlib>
#include <time.h>
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
	srand(time(NULL));
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

int main() {
	//SeqListTest();
	Test_1();
}