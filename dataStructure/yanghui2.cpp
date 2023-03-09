/*
杨辉三角
教材上的解法
2023/3/9
*/
#include <iostream>
#include <queue>
using namespace std;

void yangHuiSanJiao(int n)
{
    // 队列初始化
    queue<int> q;
    // 预先放入队列的两个数
    q.push(1);
    q.push(1);
    int prev = 0;

    // 逐行处理
    for (int i = 1; i <= n; i++) // 之前没有确定好i的初始值，写成了i=0，导致后续
    // 程序的输出有误
    {
        // 每行之间保证换行
        cout << endl;
        // 每行计算之前都向队列中加入一个零
        q.push(0);
        // 处理第i行的i+2个系数
        for (int j = 1; j <= i + 2; j++)
        {
            // 读取当前队列中的一个系数并将其出队列
            int current = q.front();
            q.pop();
            // 计算下一行的系数并进队列
            // int sum = prev + current;
            q.push(prev + current);
            prev = current;
            // 打印一个系数，第i+2个为0
            if (j != i + 2)
            {
                cout << prev << " ";
            }
        }
    }
}

int main()
{

    int n;
    cin >> n;

    yangHuiSanJiao(n);
    return 0;
}