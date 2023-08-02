#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int age;
    string first_name;
    string last_name;
    int standard;

public:
    // Constructor
    Student(int age, const string& first_name, const string& last_name, int standard) {
        this->age = age;
        this->first_name = first_name;
        this->last_name = last_name;
        this->standard = standard;
    }

    void printInfo() {
        cout << "Age: " << age << endl;
        cout << "First Name: " << first_name << endl;
        cout << "Last Name: " << last_name << endl;
        cout << "Standard: " << standard << endl;
    }
};

int main() {
    Student s(21, "Vu", "Anh", 12);
    s.printInfo();
    return 0;
}
