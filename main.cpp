#include <iostream>

using namespace std;

int main()
{
    int sum = 0, value = 0;
    cout << "Enter the Set of numbers then press CTRL + Z + Enter to see the sum of the set:" << endl;
    while (std::cin >> value)
        sum += value;
    cout << "Sum is: " << sum << endl;
    return 0;
}