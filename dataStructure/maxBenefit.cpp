// 最大收益
#include <iostream>
// #include <string>
using namespace std;

// 定义一个计算股票最大收益的函数
int maxBenefit(int *array, int len)
{
    // 初始化最大收益
    int max_benefit = 0;
    // 遍历所有买卖的情况，求出最大收益
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (array[j] - array[i] > max_benefit)
            {
                max_benefit = array[j] - array[i];
            }
        }
    }

    return max_benefit;
}

int main()
{
    // 初始化一些变量
    int const MAX_LENGTH = 100;
    int num;

    cout << "输入：" << endl;
    cin >> num;

    int array[MAX_LENGTH];
    // cout << "请依次输入这些股票的价格：" << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> array[i];
    }
    cout << endl;

    // 调用求最大收益的函数并将函数结果保存在一个变量中
    int max_benefit = maxBenefit(array, num);
    cout << "输出：" << endl;
    cout << max_benefit << endl;
}