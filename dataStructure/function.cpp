/*
二元一次方程组的求解问题
2023/3/7
*/
#include <iostream>
using namespace std;
bool first = 1;
void output(int cof, int pow, int n)
{
    // 系数为0的情况
    if (cof == 0)
    {
        return;
    };
    if (!first && cof > 0)
    {
        cout << "+";
    }

    cout << cof;
    first = 0;
    // 输出x
    if (n - pow > 0)
    {
        cout << "x";
    }
    if (n - pow > 1)
    {
        cout << "^" << n - pow;
    }
    // 输出y
    if (n - pow > 0)
    {
        cout << "y";
    }
    if (n - pow > 1)
    {
        cout << "^" << n - pow;
    }
}

int main()
{
    int a, b;
    int n;
    int MAX_SIZE = n + 3;
    cin >> a >> b >> n;
    int *queue = new int[n + 3];
    int pos = 0;
    int head = 0;

    queue[pos++] = 0;
    queue[pos++] = a;
    queue[pos++] = b;
    first = 1;
    // 出队第一个值
    int temp1 = queue[(head++) % (MAX_SIZE)];
    // 在循环中出队第二个值
    int temp2;
    // 输出信息
    int outputcount = 0;
    for (int i = 0; i < n; i++)
    {
        // 入队
        queue[(pos++) % (MAX_SIZE)] = 0;

        for (int j = 0; j < i + 2; j++)
        {
            temp2 = queue[((head++) % (MAX_SIZE))];
            if (i == n - 1)
            {
                output(temp1 * b + temp2 * a, outputcount++, n);
                // cout << temp1 * b + temp2 * a << endl;
            }
            queue[(pos++) % MAX_SIZE] = temp1 * b + temp2 * a;
            temp1 = temp2;
        }
    }

    return 0;
}