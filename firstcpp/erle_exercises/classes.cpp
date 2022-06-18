#include <iostream>
#include <string>

class Rectangle { //q1
private:
	double wid,len;
	
public:
	void getwl() {
		std::cin >> wid >> len;
	}
	double area() {
		return (wid * len);
	}
};

class Addition { //q2
private:
	int cla1=0, cla2=0;
	
public:
	Addition(int cla_x, int cla_y) {
		cla1 = cla_x;
		cla2 = cla_y;
	}
	
	int sum() {
		return (cla1 + cla2);
	}
};

class Student { //q3
private:
	std::string name;
	int marks1, marks2;
	
public:
	Student(std::string n, int m1, int m2) {
		name = n;
		marks1 = m1;
		marks2 = m2;
	}

	double calc_avg() {
		return ((marks1 + marks2) / 2.0);
	}

	void disp(double avg) {
		std::cout << "The average mark for " << name << " is: " << avg << std::endl;
	}
};

int classes() { //main
	//q1
	Rectangle rect;
	std::cout << "Enter width and length of rectangle, seperated by a space: " << std::endl;
	rect.getwl();
	std::cout << "The area of rectangle is: " << rect.area() << std::endl;
	std::cout << std::endl;

	//q2
	int cla_x=0, cla_y=0;
	std::cout << "Enter 2 integers, seperated by a space: " << std::endl;
	std::cin >> cla_x >> cla_y;
	Addition add(cla_x,cla_y);
	std::cout << "The sum of the 2 integers is: " << add.sum() << std::endl;
	std::cout << std::endl;

	//q3
	std::cout << "Enter name of student: " << std::endl;
	std::string cla_name;
	std::cin.ignore();
	getline(std::cin, cla_name);
	std::cout << "Enter 2 marks of students seperated by space: " << std::endl;
	int cla_m1, cla_m2;
	std::cin >> cla_m1 >> cla_m2;
	Student stud(cla_name, cla_m1, cla_m2);
	double avg = stud.calc_avg();
	stud.disp(avg);
	std::cout << std::endl;

	return 0;
}