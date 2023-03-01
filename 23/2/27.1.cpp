// 求每股最大收益
#include <iostream>
// #include <vector>
using namespace std;

// 定义一个可以返回当前股票价格下最大收益值的函数
int maxProfit(int vec[], int len)
{
    // int len = vec.size(); // 记录当前向量组的长度
    int maxProfit = 0; // 初始化最大收益

    for (int i = 0; i < len - 1; i++) // 外层for循环记录比较的轮数
    {
        for (int j = i + 1; j < len; j++)
        {
            if (vec[j] - vec[i] > maxProfit)
            {
                maxProfit = vec[j] - vec[i];
            }
        }
    }

    return maxProfit;
}
int main()
{
    int MAX_SIZE = 100;
    int n; // 初始化一个保存股票价格数量的变量
    cout << "输入" << endl;
    cin >> n;

    int vec[MAX_SIZE]; // 初始化一个储存股票价格的数组
    // cout << "请依次输入股票这" << n << "次的价格" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    cout << endl;
    // 调用计算股票最大收益的函数并记录最大收益
    int max_profit = maxProfit(vec, n);
    cout << "输出" << max_profit << endl;
}