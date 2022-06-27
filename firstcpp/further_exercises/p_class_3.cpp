// src: https://www.cs.purdue.edu/homes/bxd/CandC++/
#include <iostream>
#include <string>

class ZooAnimal {
private:
    char* name;
    int cageNumber;
    int weightDate;
    int weight;
public:
    ZooAnimal(char*, int, int, int); // constructor function
    inline ~ZooAnimal() { delete[] name; }; // destructor function
    void changeWeight(int pounds);
    char* reptName();
    int reptWeight();
    int daysSinceLastWeighed(int today);
};

ZooAnimal::ZooAnimal(char* n, int cn, int wd, int w) {
	name = new char[strlen(n) + 1];
	strcpy(name, n);
	cageNumber = cn;
	weightDate = wd;
	weight = w;
}

char* ZooAnimal::reptName() {
    return name;
}



class LargeAnimal : public ZooAnimal { // answer -> q4.1
private:
    char* species;
    float cageMinimumVolume;
public:
    LargeAnimal(char*, int, int, int, float); // constructor function
    inline ~LargeAnimal() { 
        delete[] species; 
    }; // destructor function
    float reptCageMinimumVolume();
    char* reptName();
};

LargeAnimal::LargeAnimal(char* n, int cn, int wd, int w, float c) : ZooAnimal(n, cn, wd, w) {
	species = new char[strlen(n) + 1];
	strcpy(species, n);
	cageMinimumVolume = c;
}

char* LargeAnimal::reptName() {
    return species;
}

int main() {
    ZooAnimal bozo((char*)"abc", 1, 123, 100);
    LargeAnimal gonzo((char*)"def", 2, 456, 300, 10.0);
	
    std::cout << bozo.reptName() << std::endl;
    std::cout << gonzo.reptName() << std::endl;

    return 0;
}