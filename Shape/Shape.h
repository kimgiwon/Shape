#pragma once

class Shape {
protected:
	int x;
	int y;
public:
	Shape(int myX, int myY);
	//virtual는 베이스 클래스에만 쓰면 된다.
	virtual void Draw() const;
	virtual double GetArea() const;
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


