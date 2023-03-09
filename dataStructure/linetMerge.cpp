/*
有序线性表合并
23/3/4
*/
#include <iostream>
using namespace std;

int main()
{
    const int MAX_SIZE = 100;
    int n, m;
    cin >> n >> m;
    // 分别定义三个数组用来储存n，m和作为中间临时变量
    int a[MAX_SIZE];
    int b[MAX_SIZE];
    int c[MAX_SIZE];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }
    // 分别从两组数中的最小值开始比较，将更小的放入c中并更新指针
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }

    // 再将剩余的数放到数组c中
    while (i < n)
    {
        c[k++] = a[i++];
    }
    while (j < m)
    {
        c[k++] = b[j++];
    }
    for (int i = 0; i < n + m; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}