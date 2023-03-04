#include <iostream>
using namespace std;

int maxNum(int array[], int len)
{
    // int len = sizeof(array) / sizeof(array[0]);
    int max_num = 0;

    for (int i = 0; i < len; i++)
    {
        if (array[i] > max_num)
        {
            max_num = array[i];
        }
    }

    return max_num;
}

int main()
{
    int array[3];
    cout << "输入三个整数，求最大值" << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> array[i];
    }

    int max_num = maxNum(array, 3);
    cout << "最大值为：" << max_num << endl;
}