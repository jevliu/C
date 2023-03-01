/*
题目：c++学习、数据类型转换
作者： 刘季伟
时间：2022/2/26 21：21
地点：4区401
*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // 安全的类型转换
    // bool c = true;
    // char a1 = c;
    // int a2 = 'a';
    // cout << "a1的值为：" << a1 << endl;
    // cout << "a2的值为：" << a2 << endl;

    // 不安全的类型转换
    // int a = 20000;
    // char c = a;
    // int b = c;

    // if (a != b)
    // {
    //     cout << "oops," << a << "!=" << b << endl;
    //     cout << "After conversion b is " << b << " now\n";
    // }
    // else
    // {
    //     cout << "Wow,we have large characters." << endl;
    // }

    // double d = 0;
    // while (cin >> d)
    // {
    //     int i = d;
    //     char c = i;
    //     int i2 = c;

    //     cout << "d==" << d << " i==" << i << " i2==" << i2 << " char(" << c << ")" << endl;
    // }

    // C++11中增加的关于narrow转换的outlaw规则
    // double x{2.7};
    // int y{x};
    // int a{1000};
    // char b{a};

    cout << "Please input your name and I wil give you a hello word." << endl;
    string first_name;
    cin >> first_name;
    cout << "Hello " << first_name << ",nice to meet you." << endl;

    cout << "Please enter your fridend's name and sex(m/f)" << endl;
    string friend_name;
    char friend_sex = '0';
    cin >> friend_name >> friend_sex;

    if (friend_sex == 'm')
    {
        cout << "Have you seen " << friend_name << " recently? Please ask him to recall me." << endl;
    }
    if (friend_sex == 'f')
    {
        cout << "Have you seen " << friend_name << " recently? Please ask her to recall me." << endl;
    }
    if (friend_sex != 'f' && friend_sex != 'm')
    {
        cout << "Please enter the right form of gender of your friend." << endl;
    }
}