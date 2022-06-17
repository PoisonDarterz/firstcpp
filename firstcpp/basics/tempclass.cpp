#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

class Station {
public:
	std::string sName[5];
	std::string sID[5];

	void getStation(std::string* sN, std::string* sI) {
		for (auto i = 0; i < 5; i++) {
			std::cout << "Enter the station ID: ";
			std::cin >> sI[i];
		}
		for (auto i = 0; i < 5; i++) {
			std::cout << "Enter the station name: ";
			std::cin >> sN[i];
		}
	}
};

class Temperature{
public:
	double celsius[5];
	double fahrenheit[5];
	double avg;

	void getTemp(double* c, double* f, double* avg){
		double sum = 0.0;
		for(auto i = 0; i < 5; i++) {
			std::cout << "Enter the temperature in Fahrenheit: ";
			std::cin >> f[i];
			c[i] = (f[i] - 32) * 5 / 9;
			sum = sum + c[i];
		}
		*avg = sum / 5;
	}
};

void report(std::string* sID, std::string* sName, double* cels) {
	std::cout << "\n-------------Input Summary------------------" << std::endl;
	std::cout << std::left << std::setw(7) << "ID" << std::setw(15) << "Name" << std::setw(7) << "Temperature(C)" << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << std::left << std::setw(7) << sID[i] << std::setw(15) << sName[i] << std::setw(7) << std::fixed << std::setprecision(2) << cels[i] << std::endl;
	}
}


int main() {
	Station sta;
	std::string* sN = &sta.sName[0];
	std::string* sI = &sta.sID[0];
	sta.getStation(sN, sI);
	
	Temperature temp;
	double* c = &temp.celsius[0];
	double* f = &temp.fahrenheit[0];
	double* a = &temp.avg;
	temp.getTemp(c, f, a);

	report(sta.sID, sta.sName, temp.celsius);
}
