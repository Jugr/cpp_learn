#include<iostream>
#include<string>
using namespace std;

struct Student
{
	long id;
	int age;
	string name;
}s3;//��ʼ��������������ṹ��ʱ˳�㴴��


struct Teacher
{
	string name;
	Student s;
};

void myprint1(Student s);
void myprint2(Student* p);
int main7() {

	//��ʼ������һ**********************************************
	struct Student s1;
	s1.age = 18;
	s1.id = 139245;
	s1.name = "����";
	//cout << s1.name << endl;

	//��ʼ����������
	struct Student s2 = { 3215324,13,"����"};
	//cout << s2.id << endl;

	//��ʼ��������
	s3.name = "����";

	//�ṹ������**************************************************************
	struct Student stuarr[3] = {
		{2324,12,"ds"},
		{2325,15,"ds1"},
		{25454,17,"ds2"}
	};
	/*for (int i = 0; i < 3; i++) {
		cout << stuarr[i].age<<"  "<< stuarr[i].id<< "  " << stuarr[i].name << endl;
	}*/

	//�ṹ��ָ��****************************************************************

	Student s4 = { 3215324,13,"����" };
	/*Student* p;
	p = &s4;*/
	Student * p = &s4;
	//cout << p->name << endl;

	//�ṹ��Ƕ��****************************************************************
	struct Teacher t1;
	t1.name = "aa";
	t1.s.name = "bb";
	//cout << t1.s.name << endl;


	//�ṹ������������*****************************************************
	//ָ����
	//myprint1( s1);

	//��ַ����
	//myprint2(&s1);



	system("pause");
	return 0;
}

void myprint1(Student s) {
	cout << s.name << endl;
}

//const���β�������ֹ��ַ����ʱ���������޸�
void myprint2(const Student *p) {
	cout << p->name<< endl;
}
