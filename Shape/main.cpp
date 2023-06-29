#include <iostream>
using namespace std;

#include "Shape.h"

int main() {
	//define 보다 좋음. (디버깅할때 볼 수 있음)
	const int size = 2;
	Shape* p[size]; //포인터 배열
	//x, y, width, height
	p[0] = new Rect(10, 10, 5, 8);    //x, y, radius
	p[1] = new Circle(10, 10, 5);
	//위에서는 업캐스팅이 일어난다. 


	for (int i = 0; i < size; i++) {
		p[i]->Draw();
		cout << "면적: " << p[i]->GetArea() << endl;
	}

	for (int i = 0; i < size; i++) {
		delete p[i];
	}

	return 0;
}