#include <iostream>
#include<string>
using namespace std;


void change_value1(int* p) {
	*p = 30;
}

void change_value2(int& re) {
	re = 40;
}

int main9() {

	int a = 10;

	/*
		//re����a�ı���,��a����ͬ�ĵ�ַ
	int& re = a;

	cout << re << endl;
	re = 20;
	cout << a << endl;
	*/
	
	//��һ�� �������ӿ���
	//aֵ�仯
	change_value1(&a);
	cout << a << endl;
	//aֵ�仯
	change_value2(a);
	cout << a << endl;




	system("pause");
	return 0;
}










