//entire code commented so i can do the next exercise which has different code.

//// src: https://www.cs.purdue.edu/homes/bxd/CandC++/
//#include <iostream>
//#include <string>
//
//class ZooAnimal {
//public:
//    class nutrition {
//    private:
//        int numberMeals;
//        int maxPoundsFed;
//        float avgNutrValue;
//
//    public:
//        inline nutrition() {
//            numberMeals = 4;
//            maxPoundsFed = 75;
//            avgNutrValue = 38.21;
//        }; // constructor function
//
//        inline float reptMealNutrition() {
//            return numberMeals * avgNutrValue;
//        };
//    };
//	
//private:
//    char* name;
//    int cageNumber;
//    int weightDate;
//    int weight;
//    nutrition nutr;
//	
//public:
//    static int oldestWeightDate;
//    ZooAnimal(char*, int, int, int); // constructor function
//    operator int(); // member conversion function
//    ~ZooAnimal(); // destructor function
//    void changeWeight(int pounds);
//    char* reptName();
//    int reptWeight();
//    int daysSinceLastWeighed(int today);
//    static void changeOldestWeightDate(int date);
//    float reptNutrition();
//};
//
//ZooAnimal::ZooAnimal(char* n, int cn, int wd, int w) { // answer -> q3.1
//    char* name = new char[20];
//    strcpy(name, n);
//	cageNumber = cn;
//	weightDate = wd;
//	weight = w;
//}
//	
//ZooAnimal::operator int() { // answer -> q3.3
//    return cageNumber;
//}
//
//int ZooAnimal::oldestWeightDate; // answer -> 4.1
//
//void ZooAnimal::changeOldestWeightDate(int date) {
//	oldestWeightDate = date;
//}
//
//int reptOldestZooAnimalWeightDate() { // answer -> q4.2
//	return ZooAnimal::oldestWeightDate;
//}
//
//float ZooAnimal::reptNutrition() { // answer -> q4.3
//	return nutr.reptMealNutrition();
// 
// return 0;
//}