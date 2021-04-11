#include <iostream>

using namespace std;

int main()
{
    int start, end;
    cout << "Enter starting number then ending number" << endl;
    cin >> start >> end;
    if (start < end)
    {
        cout << "Numbers from " << start << " to " << end << endl;
        while (start <= end)
        {
            cout << start++ << endl;
        }
    }
    return 0;
}