/*
c++上机第二周：角谷猜想
2023/3/8
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            cout << n << "/2=" << n / 2 << endl;
            n = n / 2;
        }
        else
        {
            cout << n << "*3+1=" << n * 3 + 1 << endl;
            n = n * 3 + 1;
        }
    }

    return 0;
}
