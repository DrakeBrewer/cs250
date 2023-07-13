// ========================
// AAC-Project-Week2-Monday.cpp : this file contains
// the 'main' function, Program execution begins and ends there.
// ========================
 
// ========================
#include <iostream>

using std::cout;
using std::endl;
// ========================

// ========================
#include <string>

using std::string;
// ========================

// structure Person
// ========================
class Person {
    private:
        string firstName;
        unsigned int age;
        double weight;

    public:


        // Accessor Member-Function getAge
        void setFirstName(string firstName) {
            this->firstName = firstName;
        };
    // Accessor Member-Function getFirstName
        string getFirstName() {
            return this->firstName;
        };

        // Mutator Member-Functions setAge
        void setAge(unsigned int age) {
            this->age = age;
        };
        // Accessor Member-Function getAge
        unsigned int getAge() {
            return this->age;
        };


        // Mutator Member-Functions setWeight
        void setWeight(double weight) {
            this->weight = weight;
        };
        // Accessor Member-Function getWeight
        double getWeight() {
            return this->age;
        };
    
        // General member functionn eat()
        void eat(double foodWeight) {

            this->weight = weight+foodWeight;
        };

        // General member functionn speak()
        void speak() {
            cout << "===========================" << endl;
            cout << "First Name -->" << firstName << endl;
            cout << "Age -->" << age << " years" << endl;
            cout << "Weight -->" << weight << " lb" << endl;
            cout << "===========================" << endl;
        };
    };
// ========================

// namespaces
// ========================
namespace DDD {
    int x;
}
// ========================
// ========================
namespace XYZ {
    int x;
}
// ========================

// ========================
int main()
{
    cout << "AAC-Project-Week2-Monday" << endl;

    double weightOfDinnerJill;
    double weightOfDinnerJohn;
    Person jill;
    Person john;

    DDD::x = 3;
    XYZ::x = 3;

    DDD::x = DDD::x + XYZ::x;
    cout << "DDD::x = " << DDD::x << endl;
    cout << "XYZ::x = " << XYZ::x << endl;
    

    jill.setFirstName("Jill");
    jill.setAge(27);
    jill.setWeight(128.5);
    jill.speak();

    weightOfDinnerJill = 3.5;
    jill.eat(weightOfDinnerJill);
    jill.speak();
    

    john.setFirstName("John");
    john.setAge(29);
    john.setWeight(167.8);
    john.speak();

    weightOfDinnerJohn = 5.5;
    john.eat(weightOfDinnerJohn);
    john.speak();
}
// ========================w