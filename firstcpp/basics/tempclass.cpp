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
	//std::cout << std::left << std::setw(7) << "ID" << std::setw(15) << "Name" << std::setw(7) << "Temperature(C)" << std::endl;
	printf("%-7s %-15s %-7s\n", "ID", "Name", "Temperature(C)");
	for (int i = 0; i < 5; i++) {
		//std::cout << std::left << std::setw(7) << sID[i] << std::setw(15) << sName[i] << std::setw(7) << std::fixed << std::setprecision(2) << cels[i] << std::endl;
		printf("%-7s %-15s %-7.2f\n", sID[i].c_str(), sName[i].c_str(), cels[i]);
	}
	std::cout << std::endl;
}

void minmaxavg(std::vector<std::string> maxName, std::vector<std::string> minName, std::vector<std::string> maxID, std::vector<std::string> minID,
	std::vector<int> maxindex, std::vector<int> minindex, double avg, double maxTemp, double minTemp) {

	std::cout << "The average temperature is: " << std::fixed << std::setprecision(2) << avg << std::endl;;
	std::cout << "Stations with minimum temperatures: " << std::endl;
	for (int i = 0; i < minindex.size(); i++) {
		//std::cout << std::left << std::setw(7) << minID[i] << std::setw(15) << minName[i] << std::setw(7) << std::fixed << std::setprecision(2) << minTemp << std::endl;
		printf("%-7s %-15s %-7.2f\n", minID[i].c_str(), minName[i].c_str(), minTemp);
	}
	std::cout << "Stations with maximum temperatures: " << std::endl;
	for (int j = 0; j < maxindex.size(); j++) {
		//std::cout << std::left << std::setw(7) << maxID[j] << std::setw(15) << maxName[j] << std::setw(7) << std::fixed << std::setprecision(2) << maxTemp << std::endl;
		printf("%-7s %-15s %-7.2f\n", maxID[j].c_str(), maxName[j].c_str(), maxTemp);
	}
	std::cout << std::endl;
}

void search(std::string* stationID, std::string* stationName, double* fahrenheit, double* celsius) {
	std::cout << "================ Station ID search ====================" << std::endl;
	std::string yesno, target;
	do {
		do { //this loop checks for valid input of yes or no.
			std::cout << "Search by station ID? (Y/N) : ";
			std::cin >> yesno;
			if (yesno == "N") {
				std::cout << "OK. System will exit now.\nAll temperatures processed.";
				return;
			}
			else if (yesno == "Y") {
				continue;
			}
			else {
				std::cout << "Invalid input! Please input again." << std::endl;
			}
		} while (!(yesno == "Y" || yesno == "N"));

		std::cout << "Enter search station ID: ";
		std::cin >> target;
		bool found = false;
		int tgtIndex;
		std::string tgtID, tgtName;
		double tgtFahr, tgtCels;
		for (int n = 0; n < 5; n++) {
			if (stationID[n] == target) {
				tgtCels = celsius[n];
				tgtFahr = fahrenheit[n];
				tgtID = stationID[n];
				tgtName = stationName[n];
				tgtIndex = n;
				found = true;

				std::cout << "Target found. Displaying..." << std::endl;
				//std::cout << std::left << std::setw(4) << tgtIndex << std::setw(7) << tgtID << std::setw(15) << tgtName
					//<< std::setw(7) << std::right << std::fixed << std::setprecision(2) << tgtCels << " (C)" << std::setw(7) << tgtFahr << " (F)" << std::endl;
				printf("%-4s %-7s %-15s %-7.2f (C) %-7.2f (F)", std::to_string(tgtIndex).c_str(), tgtID.c_str(), tgtName.c_str(), tgtCels, tgtFahr);
			}
		}
		if (!found) {
			std::cout << "No record for station ID " << target << std::endl;
		}
	} while (true); //loops back to line 85
}

int main() { //main
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
	search(sta.sID, sta.sName, temp.fahrenheit, temp.celsius);
	return 0;
}
