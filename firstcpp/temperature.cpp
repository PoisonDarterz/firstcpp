#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

//methods to get input: getID(), getName(), getTemp()
vector<string> getID() {
	vector<string> input(5);
	cout << "-----------Input of Station ID----------" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Enter station ID: ";
		cin >> input[i];
	}
	return input;
}

vector<string> getName(vector<string> sID) {
	vector<string> input(5);
	cout << "-----------Input of Station Name----------" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Enter station Name for " << sID[i] << ": " << endl;
		cin.ignore(); //ignore one input, or else it skips one input.
		getline(cin, input[i]);
	}
	return input;
}

vector<double> getTemp(vector<string> sName) {
	vector<double> input(5);
	cout << "-------Input of Temperature in Fahrenheit--------" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Enter temperature for " << sName[i] << ": ";
		cin >> input[i];
	}
	return input;
}

//conversion method fr Fahrenheit to Celsius
vector<double> getCelsius(vector<double> frh) {
	vector<double> cels(5);
	for (int i = 0; i < 5; i++) {
		cels[i] = (frh[i] - 32) * 5 / 9;
	}
	return cels;
}

//calculation method to get average
double getAvg(vector<double> cels) {
	double avg, sum = 0;
	for (int i = 0; i < 5; i++) {
		sum = sum + cels[i];
	}
	avg = sum / 5;
	return avg;
}

//report methods report(), minmaxavg()
void report(vector<string> sID, vector<string> sName, vector<double> cels) {
	cout << "\n-------------Input Summary------------------" << endl;
	cout << left << setw(7) << "ID" << setw(15) << "Name" << setw(7) << "Temperature(C)" << endl;
	for (int i = 0; i < 5; i++) {
		cout << left << setw(7) << sID[i] << setw(15) << sName[i] << setw(7) << fixed << setprecision(2) << cels[i] << endl;
	}
}

void minmaxavg(vector<string> maxName, vector<string> minName, vector<string> maxID, vector<string> minID,
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
void search(vector<string> stationID, vector<string> stationName, vector<double> fahrenheit, vector<double> celsius) {
	cout << "================ Station ID search ====================" << endl;
	string yesno, target;
	do {
		do { //this loop checks for valid input of yes or no.
			cout << "Search by station ID? (Y/N) : ";
			cin >> yesno;
			if (yesno == "N") {
				cout << "OK. System will exit now.\nAll temperatures processed.";
				return;
			} else if (yesno == "Y") {
				continue;
			} else {
				cout << "Invalid input! Please input again."<< endl;
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

int main() {
	//array and variable inits
	vector<string> stationID = getID();
	vector<string> stationName = getName(stationID);
	vector<double> fahrenheit = getTemp(stationName);
	vector<double> celsius = getCelsius(fahrenheit);
	double average = getAvg(celsius);

	//get max, min as it involves
	//too many things to be put in its own method
	double maxTemp = celsius.front();
	double minTemp = celsius.front();
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

	report(stationID, stationName, celsius);
	minmaxavg(maxName, minName, maxID, minID, maxIndex, minIndex, average, maxTemp, minTemp);
	search(stationID, stationName, fahrenheit, celsius);
} //endmain