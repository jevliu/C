#include <iostream>
using namespace std;

int main()
{
    // int i = 10;

    // 使用while循环语句
    // while (i < 20)
    // {
    //     cout << "当前i的值为：" << i << endl;
    //     i++;
    // }

    // return 0;

    // 使用for循环语句
    // for (int i = 10; i < 20; i++)
    // {
    //     cout << "当前i的值为：" << i << endl;
    // }

    // return 0;

    // 使用for语句使得一个数组中的元素都扩大2倍

    int my_array[5] = {1, 2, 3, 4, 5};
    // 数组元素扩大2倍
    for (int &x : my_array)
    {
        x *= x;
        cout << x << endl;
    }

    // do while循环加入break语句
    int i = 10;

    do
    {
        // 使用continue语句跳过15执行下一次循环
        if (i == 19)
        {
            i = i + 1;
            continue;
        }
        cout << "i的值为：" << i << endl;
        i++;
        cout << "这是新增的语句";
        // if (i > 15)
        // {
        //     break;
        // }
    } while (i < 20);

    // switch语句

    // char grade = 'A';

    // switch (grade)
    // {
    // case 'A':
    //     cout << "做的好！";
    //     break;

    // case 'B':
    //     cout << "表现良好。";
    //     break;

    // case 'C':
    //     cout << "您通过了";
    //     break;

    // case 'D':
    //     cout << "对不起，您没有通过。";
    //     break;

    // default:
    //     cout << "请输入正确的成绩。";
    //     break;
    // }

    return 0;
}