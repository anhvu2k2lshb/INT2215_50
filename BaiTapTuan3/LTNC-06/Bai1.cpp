#include <iostream>
#include <string>
using namespace std;

struct Student {
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    Student s; 
    s.age = 21;
    s.first_name = "Vu";
    s.last_name = "Anh";
    s.standard = 12;

    cout << "Age: " << s.age << endl;
    cout << "First Name: " << s.first_name << endl;
    cout << "Last Name: " << s.last_name << endl;
    cout << "Standard: " << s.standard << endl;

    return 0;
}
