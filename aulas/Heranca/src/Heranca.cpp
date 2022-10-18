//============================================================================
// Name        : Heranca.cpp
// Author      : Hugo Marcondes
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <vector>
#include <iostream>
using namespace std;

class PaintCost {
	public:
		PaintCost(double cost): cost_per_m2(cost) {
			cout << "(" << this << ") PaintCost constructed!" << endl;
		}

		double getCost(double area){
			return area * cost_per_m2;
		}

	private:
		double cost_per_m2;
};

class Shape {
	public:
		Shape(): painter(70.0) {
			cout << "(" << this << ") Shape constructed!" << endl;
		}
		virtual double area() = 0;
		double cost() {
			cout << " Shape::cost() called !" << endl;
			return painter.getCost(area());
		}
		virtual ~Shape() { }

	protected:
		PaintCost painter;
};

class Rectangle: public Shape {
	public:
		Rectangle(double w, double h):
			_width(w), _height(h) {
			cout << "(" << this << ") Rectangle(" << _width;
			cout << "," << _height << ") constructed!" << endl;
		}

		double area() {
			cout << " Rectangle::area() called !" << endl;
			return _width * _height;
		}

	private:
		double _width;
		double _height;
};

class Circle: public Shape {
	public:
		Circle(double r): _radius(r) {
			cout << "(" << this << ") Circle(" << _radius << ") constructed!" << endl;
		}
		double area() {
			cout << " Circle::area() called !" << endl;
			return ( _radius * _radius * PI);
		}

	private:
		double _radius;
		static const double PI;
};
const double Circle::PI = 3.14159;

class EquilateralTriangle: public Shape {
	public:
		EquilateralTriangle(double w): _width(w){
			cout << "(" << this << ") EquilateralTriangle(" << _width << ") constructed!" << endl;
		}
		double area() {
			cout << " EquilateralTriangle::area() called !" << endl;
			return ( _width * _width * SQRT3BY4);
		}

	private:
		double _width;
		static const double SQRT3BY4;
};
const double EquilateralTriangle::SQRT3BY4 = 0.4330127;


int main() {

	vector<Shape *> canvas;

	canvas.push_back(new Rectangle(10,5));
	canvas.push_back(new Circle(5));
	canvas.push_back(new EquilateralTriangle(3.75));
	canvas.push_back(new Rectangle(56.8,32.87));
	canvas.push_back(new Circle(10.5));

	double totalArea = 0;
	double totalCost = 0;
	for(vector<Shape *>::iterator it = canvas.begin(); it != canvas.end(); it++){
		totalArea += (*it)->area();
		totalCost += (*it)->cost();
	}

	cout << "Area total do canvas é " << totalArea << endl;
	cout << "Custo total do canvas é " << totalCost << endl;

	Rectangle rect(10, 5);
	Circle circle(4.5);
	EquilateralTriangle triangle(4);

	cout << "Rectangle total area is " << rect.area() << endl;
	cout << "Rectangle paint cost " << rect.cost() << endl;

	cout << "Circle total area is " << circle.area() << endl;
	cout << "Circle paint cost " << circle.cost() << endl;

	cout << "Rectangle total area is " << triangle.area() << endl;
	cout << "Rectangle paint cost " << triangle.cost() << endl;

	Shape * obj;
	obj = &rect;

	cout << "Shape total area is " << obj->area() << endl;
	cout << "Shape paint cost " << obj->cost() << endl;



	return 0;
}
