#include<iostream>
using namespace std;


template<class T>
class Person {
public:
	T mId;
	T mAge;


public:
	Person(T id, T age) {
		this->mAge = age;
		this->mId = id;
	}

	void show() {
		cout << "id:" <<this->mId << "age:" << this->mAge << endl;
	}

};

void test3() {

	//����ģ���ڵ���ʱ�������Զ������Ƶ�
	//��ģ�����ʱ��������ʾָ������
	Person<int> p(10, 20);
	p.show();
}



int main3() {

	test3();

	return 0;
}