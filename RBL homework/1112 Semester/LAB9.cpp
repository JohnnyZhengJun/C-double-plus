#include <iostream>
#include <vector>

using namespace std;

//點
class Pt
{
public:
	Pt() : x(0), y(0) {}
	Pt(int a, int b) {
		x = a;
		y = b;
	};
	double distanceTo(const Pt& other) const {
		int dx = x - other.x;
		int dy = y - other.y;
		return sqrt(dx * dx + dy * dy);
	};

	void print()const {
		cout << "(" << x << " , " << y << ")";
	}

	int getX() {
		return x;
	}

	int getY() {
		return y;
	}

	Pt operator-(const Pt& rhs) const {
		int dx = x - rhs.x;
		int dy = y - rhs.y;
		return Pt(dx, dy);
	}

private:
	int x;
	int y;
};


//形狀
class Shape
{
public:
	Shape() { };
	virtual double area() const = 0;
	virtual bool outside(const Pt&) const = 0;
	virtual double perimeter() const = 0;
	virtual bool degenerate() const = 0;
	virtual void print() const = 0;
};

//三角形
class Triangle : public Shape {
public:
	Triangle(Pt p1, Pt p2, Pt p3) : pt1(p1), pt2(p2), pt3(p3) {};

	double area() const {
		double a = pt1.distanceTo(pt2);
		double b = pt2.distanceTo(pt3);
		double c = pt3.distanceTo(pt1);
		double s = (a + b + c) / 2.0;
		
		return sqrt(s * (s - a) * (s - b) * (s - c));
	}

	bool outside(const Pt& p) const {
		Pt v0 = pt3 - pt1;
		Pt v1 = pt2 - pt1;
		Pt v2 = p - pt1;

		double dot00 = v0.distanceTo(v0);
		double dot01 = v0.distanceTo(v1);
		double dot02 = v0.distanceTo(v2);
		double dot11 = v1.distanceTo(v1);
		double dot12 = v1.distanceTo(v2);

		double invDenom = 1 / (dot00 * dot11 - dot01 * dot01);
		double u = (dot11 * dot02 - dot01 * dot12) * invDenom;
		double v = (dot00 * dot12 - dot01 * dot02) * invDenom;

		return (u < 0 || v < 0 || u + v > 1);
	}


	double perimeter() const {
		double a = pt1.distanceTo(pt2);
		double b = pt2.distanceTo(pt3);
		double c = pt3.distanceTo(pt1);
		return a + b + c;
	}

	bool degenerate() const {
		double a = pt1.distanceTo(pt2);
		double b = pt2.distanceTo(pt3);
		double c = pt3.distanceTo(pt1);
		return (a + b <= c || b + c <= a || c + a <= b);
	}

	void print() const {
	
		cout << "Triangle: ";
		pt1.print();
		cout << ", ";
		pt2.print();
		cout << ", ";
		pt3.print();
		cout << "\n" << "Area: " << area() << "\n" << "Perimeter: " << perimeter() << "\n";
	}

private:
	Pt pt1, pt2, pt3;
};

//平行四邊形

class Parallelogram : public Shape {
public:
	Parallelogram(Pt p1, Pt p2, Pt p3, Pt p4) : pt1(p1), pt2(p2), pt3(p3), pt4(p4) {};

	double area() const {
		double base = pt1.distanceTo(pt2);
		double height = pt2.distanceTo(pt3);
		return base * height;
	}

	bool outside(const Pt& p) const {
		double x1 = pt1.distanceTo(pt2);
		double x2 = pt2.distanceTo(p) + p.distanceTo(pt3) + pt3.distanceTo(pt4);
		double x3 = pt4.distanceTo(p) + p.distanceTo(pt1) + pt1.distanceTo(pt2);
		return x2 > x1 || x3 > x1;
	}

	double perimeter() const {
		double a = pt1.distanceTo(pt2);
		double b = pt2.distanceTo(pt3);
		return 2 * (a + b);
	}

	bool degenerate() const {
		double a = pt1.distanceTo(pt2);
		double b = pt2.distanceTo(pt3);
		double c = pt3.distanceTo(pt4);
		double d = pt4.distanceTo(pt1);
		return (a == c && b == d);
	}

	void print() const {
		cout << "Parallelogram: ";
		pt1.print();
		cout << ", ";
		pt2.print();
		cout << ", ";
		pt3.print();
		cout << ", ";
		pt4.print();
		cout << "\n" << "Area: " << area() << "\n" << "Perimeter: " << perimeter() << "\n";
	}

private:
	Pt pt1, pt2, pt3, pt4;
};

//圓形
class Circle : public Shape {
public:
	Circle(Pt p1, double aa) : pt1(p1), a(aa) {};

	double area() const {
		return 3.14159 * a * a;
	}

	bool outside(const Pt& p) const {
		double distance = pt1.distanceTo(p);
		return distance > a;
	}

	double perimeter() const {
		return 2 * 3.14159 * a;
	}

	bool degenerate() const {
		return a <= 0;
	}

	void print() const {
		cout << "Circle radius: " << a << ", Center = ";
		pt1.print();
		cout << "\n" << "Area: " << area() << "\n"<< "Perimeter: " << perimeter() << "\n";;
	}

private:
	Pt pt1;
	double a;
};

int main()
{
	vector<Pt> P(10);
	Pt p1(0, 0);
	Pt p2(2, 4);
	Pt p3(-4, 6);
	Pt p4(8, 2);
	Pt p5(6, -2);
	Pt p6(-2, 3);
	Pt p7(-2, 5);
	Pt p8(4, 2);
	Pt p9(2, -2);
	P[1] = p1;
	P[2] = p2;
	P[3] = p3;
	P[4] = p4;
	P[5] = p5;
	P[6] = p6;
	P[7] = p7;
	P[8] = p8;
	P[9] = p9;
	Triangle tr1(p1, p2, p3);
	Triangle tr2(p2, p6, p7);
	Triangle tr3(p1, p3, p8);
	Parallelogram paral1(p1, p2, p4, p5);
	Parallelogram paral2(p1, p1, p2, p9);
	Circle cir1(p6, 2.0);
	Circle cir2(p2, 4);
	Parallelogram paral3(p1, p2, p8, p9);

	const int numShape = 8;
	vector<Shape*> baseShape(numShape);
	baseShape[0] = &tr1;
	baseShape[1] = &tr2;
	baseShape[2] = &paral1;
	baseShape[3] = &cir1;
	baseShape[4] = &tr3;
	baseShape[5] = &paral2;
	baseShape[6] = &cir2;
	baseShape[7] = &paral3;

	for (int i = 0; i < numShape; i++) {
		baseShape[i]->print();
		P[(i + 5) % numShape + 1].print();

		if (baseShape[i]->outside(P[(i + 5) % numShape + 1])) {
			cout << "is outside this shape.\n";
		}
		else {
			cout << "is inside this shape.\n";
		}

		if (dynamic_cast<Circle*>(baseShape[i])) {
			cout << "## This shape is a circle.\n";
		}
		if (dynamic_cast<Triangle*>(baseShape[i])) {
			cout << "## This shape is a triangle.\n";
		}
		if (dynamic_cast<Parallelogram*>(baseShape[i])) {
			cout << "## This shape is a parallelogram.\n";
		}

		cout << endl;
	}

	return 0;
}