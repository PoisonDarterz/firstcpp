#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

//methods to get input: getID(), getName(), getTemp()
string* getID(string* sID) {
	cout << "-----------Input of Station ID----------" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Enter station ID: ";
		cin >> sID[i];
	}
	return sID;
}

string* getName(string* sName, string* sID) {
	cout << "-----------Input of Station Name----------" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Enter station Name for " << sID[i] << ": " << endl;
		cin.ignore(); //ignore one input, or else it skips one input.
		getline(cin, sName[i]);
	}
	return sName;
}

double* getTemp(double* fahr, string* sName) {
	cout << "-------Input of Temperature in Fahrenheit--------" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Enter temperature for " << sName[i] << ": ";
		cin >> fahr[i];
	}
	return fahr;
}

//conversion method fr Fahrenheit to Celsius
double* getCelsius(double* cels, double* frh) {
	for (int i = 0; i < 5; i++) {
		cels[i] = (frh[i] - 32) * 5 / 9;
	}
	return cels;
}

//calculation method to get average
double getAvg(double* cels) {
	double avg, sum = 0;
	for (int i = 0; i < 5; i++) {
		sum = sum + cels[i];
	}
	avg = sum / 5;
	return avg;
}

//report methods report(), minmaxavg()
void report2(string* sID, string* sName, double* cels) {
	cout << "\n-------------Input Summary------------------" << endl;
	cout << left << setw(7) << "ID" << setw(15) << "Name" << setw(7) << "Temperature(C)" << endl;
	for (int i = 0; i < 5; i++) {
		cout << left << setw(7) << sID[i] << setw(15) << sName[i] << setw(7) << fixed << setprecision(2) << cels[i] << endl;
	}
}

void minmaxavg2(vector<string> maxName, vector<string> minName, vector<string> maxID, vector<string> minID,
	vector<int> maxindex, vector<int> minindex, double avg, double maxTemp, double minTemp) {

	cout << "The average temperature is: " << fixed << setprecision(2) << avg << endl;;
	cout << "Stations with minimum temperatures: " << endl;
	for (int i = 0; i < minindex.size(); i++) {
		cout << left << setw(7) << minID[i] << setw(15) << minName[i] << setw(7) << fixed << setprecision(2) << minTemp << endl;
	}
	cout << "Stations with maximum temperatures: " << endl;
	for (int j = 0; j < maxindex.size(); j++) {
		cout << left << setw(7) << maxID[j] << setw(15) << maxName[j] << setw(7) << fixed << setprecision(2) << maxTemp << endl;
	}
}

//search method
void search2(string* stationID, string* stationName, double* fahrenheit, double* celsius) {
	cout << "================ Station ID search ====================" << endl;
	string yesno, target;
	do {
		do { //this loop checks for valid input of yes or no.
			cout << "Search by station ID? (Y/N) : ";
			cin >> yesno;
			if (yesno == "N") {
				cout << "OK. System will exit now.\nAll temperatures processed.";
				return;
			}
			else if (yesno == "Y") {
				continue;
			}
			else {
				cout << "Invalid input! Please input again." << endl;
			}
		} while (!(yesno == "Y" || yesno == "N"));

		cout << "Enter search station ID: ";
		cin >> target;
		bool found = false;
		int tgtIndex;
		string tgtID, tgtName;
		double tgtFahr, tgtCels;
		for (int n = 0; n < 5; n++) {
			if (stationID[n] == target) {
				tgtCels = celsius[n];
				tgtFahr = fahrenheit[n];
				tgtID = stationID[n];
				tgtName = stationName[n];
				tgtIndex = n;
				found = true;

				cout << "Target found. Displaying..." << endl;
				cout << left << setw(4) << tgtIndex << setw(7) << tgtID << setw(15) << tgtName
					<< setw(7) << right << fixed << setprecision(2) << tgtCels << " (C)" << setw(7) << tgtFahr << " (F)" << endl;
			}
		}
		if (!found) {
			cout << "No record for station ID " << target << endl;
		}
	} while (true); //loops back to line 85
}

string* stationID = new string[5];
string* stationName = new string[5];
double* fahrenheit = new double[5];
double* celsius = new double[5];
double average;

int temparray() {
	//array and variable inits
	stationID = getID(stationID);
	stationName = getName(stationName, stationID);
	fahrenheit = getTemp(fahrenheit, stationName);
	celsius = getCelsius(celsius, fahrenheit);
	average = getAvg(celsius);

	//get max, min as it involves
	//too many things to be put in its own method
	double maxTemp = celsius[0];
	double minTemp = celsius[0];
	vector<string> maxName, minName, maxID, minID;
	vector<int> maxIndex, minIndex;

	for (int m = 0; m < 5; m++) {
		if (celsius[m] > maxTemp) {
			maxTemp = celsius[m];
		}
		if (celsius[m] < minTemp) {
			minTemp = celsius[m];
		}
	}
	for (int n = 0; n < 5; n++) {
		if (celsius[n] == maxTemp) {
			maxID.push_back(stationID[n]);
			maxName.push_back(stationName[n]);
			maxIndex.push_back(n);
		}
		if (celsius[n] == minTemp) {
			minID.push_back(stationID[n]);
			minName.push_back(stationName[n]);
			minIndex.push_back(n);
		}
	}
	//end minmax

	report2(stationID, stationName, celsius);
	minmaxavg2(maxName, minName, maxID, minID, maxIndex, minIndex, average, maxTemp, minTemp);
	search2(stationID, stationName, fahrenheit, celsius);

	delete stationID, stationName, fahrenheit, celsius;
	return 0;
} //endmain