#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int c, d;
        cin >> c >> d;
        int sum = 0;
        sum = c + d;
        if (sum > 6)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}