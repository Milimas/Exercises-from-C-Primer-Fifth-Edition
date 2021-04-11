#include <iostream>

using namespace std;

int main()
{
    int sum, counter = 0;
    for (int i = -100; i <= 100; ++i)
    {
        sum += i;
        cout << ++counter << "\t" << i << "\t" << sum << endl;
    }

    return 0;
}