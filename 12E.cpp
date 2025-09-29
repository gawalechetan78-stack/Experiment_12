

#include <iostream>

using namespace std;

int count = 0;

class destruct
{
public:
    destruct()
    {
        count++;
        cout << "Total objects created: " << count << endl;
    }

    ~destruct()
    {
        cout << "Total objects destroyed: " << count - 1 << endl;
        count--;
    }
};

int main(void)
{
    destruct d1, d2, d3, d4;

    cout << endl;
    return 0;
}
