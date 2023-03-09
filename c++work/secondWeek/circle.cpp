/*
c++上机第二周：圆的猜想
2023-3-8
*/
#include <iostream>

using namespace std;

int main()
{
    double r;
    const double pi = 3.14;
    cin >> r;

    double diameter = 2 * r;
    double perimeter = 2 * pi * r;
    double area = pi * r * r;
    cout << diameter << " " << perimeter << " " << area;
}
