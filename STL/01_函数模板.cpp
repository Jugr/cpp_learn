#include <iostream>
using namespace std;

// int���ͽ���
//void MySwap(int& a, int& b) {
//	int tmp = a;
//	a = b;
//	b = tmp;
//}


// int���ͽ���
//void MySwap(double& a, double& b) {
//	double tmp = a;
//	a = b;
//	b = tmp;
//}

//ģ��   ��������
// �ñ����������Ƿ���ģ�庯��
template<class T>  //template<typename T>//���߱�����������ģ�庯��
void MySwap(T& a, T& b) {
	T tmp = a;
	a = b;
	b = tmp;
}

//template<class T1,class T2>


void test1() {
	int a = 10;
	int b = 20;
	MySwap(a, b);
	cout << "a:" << a << "b:" << b << endl;
}

int main1(void) {
	test1();


	return 0;
}
