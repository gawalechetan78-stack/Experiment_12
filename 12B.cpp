
#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    int r_no;

public:
    Student()
    {
        name = "[USER]";
        r_no = 0;
    }

    void set_name(string x)
    {
        name = x;
    }

    void set_r_no(int x);

    void display();
};

void Student::set_r_no(int x)
{
    r_no = x;
}

void Student::display() {
    cout << name << ": " << r_no << endl;
}

int main(void)
{
    Student s;
    s.display();
    return 0;
}
