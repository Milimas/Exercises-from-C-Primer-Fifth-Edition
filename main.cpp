#include <iostream>

using namespace std;

int main()
{
    int sum = 0, value = 50;
    while (value <= 100)
    {
        sum += value;
        value++;
    }
    cout << "Sum of 50 to 100 inclusive is " << sum << endl;
    return 0;
}