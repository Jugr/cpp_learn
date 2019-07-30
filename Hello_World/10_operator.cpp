#include<iostream>
using namespace std;


class Complex
{
public:
	Complex(int a, int b) {
		this->a = a;
		this->b = b;
	}
	void printComplex(){
		cout << "(" << this->a << "+" << this->b << "i)" << endl;
	}
	friend Complex complexAdd(Complex& c1, Complex& c2);
	
	//����
	Complex complexAdd(Complex& another) {
		Complex tmp(this->a + another.a, this->b + another.b);
		return tmp;
	}

	//����
	//friend Complex operator+ (Complex& c1, Complex& c2);

	//���� ͬ����
	Complex operator+ (Complex& another) {
		Complex tmp(this->a + another.a, this->b + another.b);
		return tmp;
	}

private:
	int a; //ʵ��
	int b;//����
};

//��һ
Complex complexAdd(Complex& c1, Complex& c2)
{
	Complex tmp(c1.a + c2.a, c1.b + c2.b);
	return tmp;
}


#if 0
//����
//����������д��ȫ��
Complex operator+ (Complex& c1, Complex& c2)
{
	Complex tmp(c1.a + c2.a, c1.b + c2.b);
	return tmp;
}
#endif

int main() {

	Complex c1(1, 2);
	Complex c2(3, 4);

	c1.printComplex();
	c2.printComplex();

	//��һ
	//Complex c3 = complexAdd(c1, c2);
	//c3.printComplex();

	//����
	//Complex c3 = c2.complexAdd(c1);
	//c3.printComplex();

	//����
	Complex c3 = c1 + c2;//
	//Complex c3 = operator+(c1, c2);
	c3.printComplex();

	//����
	Complex c3 = c1 + c2;//
	//Complex c3 = c1.operator+(c2);
	c3.printComplex();


	return 0;
}