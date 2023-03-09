/*
算法导论练习
2023/3/6
*/
// 二进制相加的问题
#include <iostream>
#include <vector>
using namespace std;

// 定义两个二进制相加的函数
vector<int> addBinery(vector<int> &A, vector<int> &B)
{
    // 定义一个长度为n+1初始值全为零的向量C
    int n = A.size();
    vector<int> C(n + 1, 0);
    // 定义一个进位数carry
    int carry = 0;
    // 遍历整个数组和A和B并将对应的位置相加赋给C
    for (int i = 0; i < n; i++)
    {
        // 定义一个保存当前和与进位的sum
        int sum = 0;
        sum = A[i] + B[i] + carry;
        // 分别采用取模和整数相除的方法来得到从C中的个位数和进位数
        C[i] = sum % 2;
        carry = sum / 2;
    }
    // 将最后得到的进位赋值给C的最高位
    C[n] = carry;
    return C;
}

int main()
{
    int n = 0;
    vector<int> A;
    vector<int> B;

    cout << "请输入二进制的长度n:" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> A.push_back();
    }
    for (int j = 0; j < n; j++)
    {
        cin >> B.push_back();
    }
    vector<int> C = addBinery(A, B);
    cout << C;
}