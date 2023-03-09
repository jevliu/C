/*
ChatGPT实现二元一次方程组问题
2023/3/7
*/
#include <iostream>
using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b >> n;

    int coef[n + 1] = {0}; // 存储幂运算的结果各项的系数

    // 利用二项式定理展开式子，并按照 x 的幂降序合并同类项
    for (int k = 0; k <= n; k++)
    {
        for (int i = 0; i <= k; i++)
        {
            int j = k - i;
            int c = 1;
            if (i > 0)
                c *= a;
            if (j > 0)
                c *= b;
            if ((k - i) % 2 == 1)
                c = -c;
            coef[n - i + j] += c;
        }
    }

    // 输出幂运算的结果
    bool first_term = true;
    bool is_zero = true;
    for (int i = n; i >= 0; i--)
    {
        if (coef[i] == 0)
            continue;
        is_zero = false;
        if (coef[i] > 0 && !first_term)
            cout << "+";
        first_term = false;
        if (coef[i] == -1 && i > 0)
            cout << "-";
        else if (coef[i] == 1 && i > 0)
            cout << "";
        else
            cout << coef[i];
        if (i > 0)
            cout << "x";
        if (i > 1)
            cout << "^" << i;
        if (i > 0)
            cout << "y";
    }
    if (is_zero)
        cout << "0"; // 处理多项式恒为0的情况

    cout << endl;
    return 0;
}
