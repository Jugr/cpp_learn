#include<iostream>
using namespace std;

template<class T>
class Person {
public :
	T mAge;
public:
	Person() {
		mAge = 0;
	}
};
//��ģ��������ͨ��
class subPerson :public Person<int> {};

//��ģ��������ģ��
template<class T>
class subPerson2 :public Person<T> {};

int main5(void)
{
	subPerson2<int>();
	return 0;
}