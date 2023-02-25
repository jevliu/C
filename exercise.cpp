/*
c++ exercise
auther jevon
time
*/
#include <iostream>
#include <cstring>
#include <math.h>
#include <iomanip>
using std::setw;
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

    // cout << "Please enter your name and age then I will give a greating for you." << endl;
    // string name;
    // double age;
    // cin >> name >> age;
    // age = age * 12;
    // int i = 4;

    // cout << "Hello " << name << "(" << age << "months)old "
    //      << "enjoy your learning time !" << endl;
    // cout << "The square of 4 is " << sqrt(i) << endl;

    // detect repeated words

    // string privious = ""; // initiate privoious word
    // string current;       // initiate current word

    // while (cin >> current)
    // {
    //     if (current == privious)
    //     {
    //         cout << "repeated word: " << current << endl;
    //         break;
    //     }
    //     privious = current;
    // }

    // 百鸡百钱问题的AI实现
    int count = 0;
    for (int i = 0; i <= 100 / 5; i++)
    { // 枚举公鸡数量
        for (int j = 0; j <= 100 / 3; j++)
        {                        // 枚举母鸡数量
            int k = 100 - i - j; // 计算小鸡数量
            if (k % 3 == 0 && i * 5 + j * 3 + k / 3 == 100)
            { // 判断是否符合条件
                cout << "公鸡数量：" << i << endl;
                cout << "母鸡数量：" << j << endl;
                cout << "小鸡数量：" << k << endl;
                count++;
            }
        }
    }
    cout << "总方案数：" << count << endl; // 输出总方案数
    return 0;
}
