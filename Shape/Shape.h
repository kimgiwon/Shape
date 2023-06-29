#pragma once

//추상 클래스 Abstract Class 객체를 생성할수 없음.
//추상 클래스를 상속하여 재정의 하지 않으면 하위 클래스도 추상 클래스
class Shape {
protected:
	int x;
	int y;
public:
	Shape(int myX, int myY);
	//virtual는 베이스 클래스에만 쓰면 된다.
	virtual void Draw() const;
	//Pure virtual function 순수 가상함수.
	virtual double GetArea() const = 0;
};

class Circle : public Shape {
private:
	int radius;
public:
	//defalt는 선언시에만 써야함
	Circle(int x = 0, int y = 0, int myRadius = 1);
	void Draw() const;
	double GetArea() const;
};

class Rect : public Shape {
private:
	int width;
	int height;
public:
	Rect(int x = 0, int y = 0, int myWidth = 1, int myHeight = 1);
	void Draw() const;
	double GetArea() const;
};


