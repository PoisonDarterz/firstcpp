#include <iostream>
#include <string>

class Shape { //q1
public:
	double width, height;
	void setdata(double w, double h) {
		width = w;
		height = h;
	}
};

class Triangle : public Shape { //q1
public:
	double area() {
		return 0.5 * width * height;
	}
};

class Rectangle : public Shape { //q1
public:
	double area() {
		return width * height;
	}
};

class Mother { //q2
public:
	void display() {
		std::cout << "Your mom" << std::endl;
	}
};

class Daughter : public Mother { //q2
public:
	void display() {
		std::cout << "Your daughter" << std::endl;
	}
};

class Animal { //q3
protected:
	std::string name;
	int age;
public:
	void set_value(std::string n, int a) {
		name = n;
		age = a;
	}
};

class Zebra : public Animal { //q3
public:
	void display() {
		std::cout << "Name of zebra: " << name << std::endl;
		std::cout << "Age of zebra: " << age << std::endl;
	}
};

class Dolphin : public Animal { //q3
public:
	void display() {
		std::cout << "Name of dolphin: " << name << std::endl;
		std::cout << "Age of dolphin: " << age << std::endl;
	}
};

int oop() { //main
	//q1
	Triangle tri;
	Rectangle rec;
	double oop_w, oop_l;
	std::cout << "Enter width and length of shape seperated by space: " << std::endl;
	std::cin >> oop_w >> oop_l;
	tri.setdata(oop_w, oop_l);
	rec.setdata(oop_w, oop_l);
	std::cout << "Area of rectangle is: " << rec.area() << std::endl;
	std::cout << "Area of triangle is: " << tri.area() << std::endl;

	//q2
	Daughter dau;
	dau.display();

	//q3
	Zebra zeb;
	Dolphin dol;
	std::string oop_n;
	int oop_a;
	std::cout << "Enter name (one word) and age of zebra, seperated by space: " << std::endl;
	std::cin >> oop_n >> oop_a;
	zeb.set_value(oop_n, oop_a);
	std::cout << "Enter name (one word) and age of dolphin, seperated by space: " << std::endl;
	std::cin >> oop_n >> oop_a;
	dol.set_value(oop_n, oop_a);
	zeb.display();
	dol.display();

	return 0;
}