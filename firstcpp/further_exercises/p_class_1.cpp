//entire code commented so i can do the next exercise which has different code.

//// src: https://www.cs.purdue.edu/homes/bxd/CandC++/
//#include <iostream>
//
//enum scale { ounces, kilograms };
//
//class ZooAnimal { //q1
//private:
//    char* name;
//    int cageNumber;
//    int weightDate;
//    int weight;
//
//    //q2 additions
//    ZooAnimal* mother;
//	
//public:
//    void Create(char*, int, int, int); //answer -> q1.1
//    void Destroy(); // destroy function
//    char* reptName();
//    int daysSinceLastWeighed(int today);
//	
//    //q2 additions
//    void changeWeight(int pounds);
//    inline void changeWeightDate(int today);
//    int reptWeight();
//    void reptWeight(scale which);
//    inline int reptWeightDate();
//    void isMotherOf(ZooAnimal&);
//};
//
//void ZooAnimal::Create(char* n, int cN, int wD, int w) {
//    name = n;
//    cageNumber = cN;
//    weightDate = wD;
//    weight = w;
//}
//
//void ZooAnimal::Destroy() {
//    delete[] name;
//}
//
//// -------- member function to return the animal's name
//char* ZooAnimal::reptName() {
//    return name;
//}
//
//// -------- member function to return the number of days since the animal was last weighed
//int ZooAnimal::daysSinceLastWeighed(int today) { // answer -> q1.2
//    int startday, thisday;
//    thisday = today / 100 * 30 + today - today / 100 * 100;
//    startday = weightDate / 100 * 30 + weightDate - weightDate / 100 * 100;
//    if (thisday < startday)
//        thisday += 360;
//    return (thisday - startday);
//}
//
//inline int ZooAnimal::reptWeightDate() { // answer -> q2.1
//    return weightDate;
//}
//
//inline void ZooAnimal::changeWeightDate(int today) { // answer -> q2.2
//    weightDate = today;
//}
//
//int main() {
//	//q1
//    ZooAnimal bozo;
//    bozo.Create((char*)"Bozo", 408, 1027, 400);
//    std::cout << "This animal's name is " << bozo.reptName() << std::endl; //answer -> q1.3
//    //bozo.Destroy();
//
//	
//    return 0;
//}