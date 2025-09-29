
#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    Student(string x, int y)
    {
        name = x;
        age = y;
    }

    Student(const Student &a)
    {
        name = a.name;
        age = a.age;
        cout << "Copy constructor invoked!" << endl;
    }

    void display()
    {
        cout << name << ": " << age << endl;
    }
};

int main(void)
{
    Student s1("Abhisar", 19);
    Student s2(s1);

    cout << endl;

    cout << "Original object" << endl;
    s1.display();

    cout << endl;

    cout << "Copied object" << endl;
    s2.display();

    return 0;
}
