/*
c++ exercise
auther jevon
time
*/
#include <iostream>
#include <cstring>
using namespace std;

// 建立异常函数
int abc(int a, int b, int c)
{
    if (a < 0 && b < 0 && c < 0)
        throw 1;
    if (a == 0 && b == 0 && c == 0)
        throw 2;
    return a + b * c;
}

// 建立主函数
int main()
{
    // try
    // {
    //     cout << abc(0, 0, h0) << endl;
    // }
    // catch (int e)
    // {
    //     cout << "An exception has been thrown" << endl;
    //     cout << e << endl;
    // }

    cout << "Please enter your name and I will give a greating for you." << endl;
    string name;
    cin >> name;
    cout << "Hello " << name << ",enjoy your learning time!" << endl;
}
