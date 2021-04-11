#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    // keep executing the while as long as val is less than or equal to 10
    for (int value = 1; value <= 10; value++)
    {
        sum += value; // assigns sum + val to sum
    }
    cout << "Sum of 1 to 10 inclusive is " << sum << endl;
    return 0;
}