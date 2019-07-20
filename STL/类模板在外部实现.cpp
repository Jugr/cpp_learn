#include<iostream>
using namespace std;


template<class T>
class Person {
private:
	T mId;
	T mAge;
public:
	//�������Ʋ�����
	template<class T>
	friend ostream& operator<<(ostream& os,Person<T>& p);
	Person(T id, T age);
	void Show();
};

//����ʵ��
template<class T>
Person<T>::Person(T age, T id) {
	this->mId = id;
	this->mAge = age;
}
template<class T>
void Person<T>::Show() {
	cout << "id:" <<mId << "age:" << mAge << endl;
}

//�������Ʋ�������ʵ��
template<class T>
ostream& operator<<(ostream& os, Person<T>& p) {
	os<< "id:" << p.mId << "age:" <<p. mAge << endl;
	return os;
}

void test() {
	Person<int> p(10, 20);
	//p.Show();
	cout << p;
}
int main() {

	test();

	return 0;
}