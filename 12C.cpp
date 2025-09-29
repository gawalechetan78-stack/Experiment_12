

#include <iostream>

using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(int x, int y, int z)
    {
        day = 0;
        month = 0;
        year = 0;

        if(x > 31 || y > 12) {
            cout << "Invalid date figure" << endl;
            return;
        } else {
            day = x;
            month = y;
            year = z;
        }
    }

    void display(void) {
        cout << day << "/" << month << "/" << year << endl;
    };
};

int main(void)
{
    int d, m, y;

    cin >> d >> m >> y;
    Date userDate(d, m, y);
    userDate.display();
    return 0;
}
