/*
二元一次方程组的求解问题
CSDN社区答案
2023/3/7、9
*/
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    long long a, b;
    long long t, w;
    int x, y, n;
    cin >> a >> b >> n;
    // 若输入的次数n不为0则正常进行计算，否则直接输出1，程序结束
    if (n != 0)
    {
        x = n;
        y = 0;
        queue<long long> q;
        q.push(0);
        q.push(a);
        q.push(b);
        for (int i = 1; i < n; i++)
        {
            q.push(0);
            for (int j = 1; j <= i + 2; j++)
            {
                t = q.front();
                q.pop();
                w = q.front();
                q.push(b * t + a * w); // 计算系数，利用杨辉三角
            }
        }
        q.pop();
        while (!q.empty())
        {
            // 系数为1时不输出系数，系数为-1是只输出负号，其他情况正常输出队列中的系数
            if (q.front() == 1)
            {
            }
            else if (q.front() == -1)
            {
                cout << "-";
            }
            else
            {
                cout << q.front();
            }
            // 根据当前x的幂次来决定x的输出形式
            if (x == 1)
            {
                cout << "x";
            }
            else if (x == 0)
            {
            }
            else
            {
                cout << "x^" << x;
            }
            // 根据当前y的幂次来决定y的输出形式
            if (y == 1)
            {
                cout << "y";
            }
            else if (y == 0)
            {
            }
            else
            {
                cout << "y^" << y;
            }
            x--;
            y++;

            q.pop();
            if (!q.empty() && q.front() > 0)
                cout << "+";
        }
    }
    else
    {
        cout << 1 << endl;
    }
    return 0;
}
