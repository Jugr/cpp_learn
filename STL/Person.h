#pragma once   //��ֹͷ�ļ����ظ�����

//#ifndef PERSON_H  //ifndef  ��ֹͷ�ļ����ظ�����  //ת����д ѡ���ַ� ctrl+shift+U
//#define PERSON_H
//#endif
#include<iostream>
#include<string>
using namespace std;

//.h������

class Person {

public:
	string mName;
	int mAge;
	int mId;
public:
	Person(string name, int age);
	void Show();
};