// src: https://www.cs.purdue.edu/homes/bxd/CandC++/

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

class LargeAnimal : public ZooAnimal {
private:
    char* species;
    float cageMinimumVolume;
public:
    LargeAnimal(char*, int, int, int, float); // constructor function
    inline ~LargeAnimal() { delete[] species; }; // destructor function
    float reptCageMinimumVolume();
};
