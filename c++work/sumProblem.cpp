#include <iostream>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }
        cout << sum << endl
             << endl;
    }
    return 0;
}
