#include <iostream>
using namespace std;
// 函数声明
int max(int num1, int num2);

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
        cout << "这是新增的语句" << endl;
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

    // 调用max函数
    int ret;
    ret = max(5, 33333);
    cout << "较大的值为" << ret << endl;

    return 0;
}

// 创建一个函数比较两个数的大小并返回较大的那个

int max(int num1, int num2)
{
    // 闯将一个临时变量
    int result;

    if (num1 > num2)
    {
        result = num1;
    }
    else
    {
        result = num2;
    }
    return result;
}