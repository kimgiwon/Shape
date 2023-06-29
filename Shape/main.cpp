#include <iostream>
using namespace std;

#include "Shape.h"

int main() {
	//define ���� ����. (������Ҷ� �� �� ����)
	const int size = 2;
	Shape* p[size]; //������ �迭
	//x, y, width, height
	p[0] = new Rect(10, 10, 5, 8);    //x, y, radius
	p[1] = new Circle(10, 10, 5);
	//�������� ��ĳ������ �Ͼ��. 


	for (int i = 0; i < size; i++) {
		p[i]->Draw();
		cout << "����: " << p[i]->GetArea() << endl;
	}

	for (int i = 0; i < size; i++) {
		delete p[i];
	}

	return 0;
}