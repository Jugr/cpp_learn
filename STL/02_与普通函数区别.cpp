#include<iostream>
using namespace std;


template<class T>
int MyAdd(T a, T b) {
	return a + b;
}

int MyAdd(int a, char c) {
	return a + c;
}

void test02() {

	int a = 10;
	int b = 20;
	char c1 = 'a';
	char c2 = 'b';

	MyAdd(a, c1);//������ͨ����  ģ�庯�����Ͳ�ƥ��
	MyAdd(a, b);//������ͨ����   ���ֺ�������������ʱ�����ȵ�����ͨ����
	MyAdd<>(a, b);//ǿ�Ƶ���ģ�庯��
	MyAdd(c1,a);//������ͨ����  ��������ת��


	double d1 = 10.;
	double d2 = 10.;
	MyAdd(d1, d2);//�����������������ȫ��ģ�庯������ʱһ��
}





//ģ�庯�����Ա�����
template<class T>
void Print(T a) {

}

template<class T>
void Print(T a,T b) {

}


int main2()
{	
	test02();
	return 0;
}