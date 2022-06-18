#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

class Station {
public:
	std::string sName[5];
	std::string sID[5];

	void setStation(std::string* sN, std::string* sI) {
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

	void setTemp(double* c, double* f, double* avg){
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
	std::cout << std::endl;
}

void minmaxavg(std::vector<std::string> maxName, std::vector<std::string> minName, std::vector<std::string> maxID, std::vector<std::string> minID,
	std::vector<int> maxindex, std::vector<int> minindex, double avg, double maxTemp, double minTemp) {

	std::cout << "The average temperature is: " << std::fixed << std::setprecision(2) << avg << std::endl;;
	std::cout << "Stations with minimum temperatures: " << std::endl;
	for (int i = 0; i < minindex.size(); i++) {
		std::cout << std::left << std::setw(7) << minID[i] << std::setw(15) << minName[i] << std::setw(7) << std::fixed << std::setprecision(2) << minTemp << std::endl;
	}
	std::cout << "Stations with maximum temperatures: " << std::endl;
	for (int j = 0; j < maxindex.size(); j++) {
		std::cout << std::left << std::setw(7) << maxID[j] << std::setw(15) << maxName[j] << std::setw(7) << std::fixed << std::setprecision(2) << maxTemp << std::endl;
	}
	std::cout << std::endl;
}

int tempclass() { //main
	Station sta;
	std::string* sN = &sta.sName[0];
	std::string* sI = &sta.sID[0];
	sta.setStation(sN, sI);

	Temperature temp;
	double* c = &temp.celsius[0];
	double* f = &temp.fahrenheit[0];
	double* a = &temp.avg;
	temp.setTemp(c, f, a);

	std::vector<std::string> maxName, minName, maxID, minID;
	std::vector<int> maxIndex, minIndex;
	double maxTemp = temp.celsius[0];
	double minTemp = temp.celsius[0];

	for (int m = 0; m < 5; m++) {
		if (temp.celsius[m] > maxTemp) {
			maxTemp = temp.celsius[m];
		}
		if (temp.celsius[m] < minTemp) {
			minTemp = temp.celsius[m];
		}
	}

	for (int n = 0; n < 5; n++) {
		if (temp.celsius[n] == maxTemp) {
			maxID.push_back(sta.sID[n]);
			maxName.push_back(sta.sName[n]);
			maxIndex.push_back(n);
		}
		if (temp.celsius[n] == minTemp) {
			minID.push_back(sta.sID[n]);
			minName.push_back(sta.sName[n]);
			minIndex.push_back(n);
		}
	}
	
	report(sta.sID, sta.sName, temp.celsius);
	minmaxavg(maxName, minName, maxID, minID, maxIndex, minIndex, temp.avg, maxTemp, minTemp);
	return 0;
}
