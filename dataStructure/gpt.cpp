#include <iostream>
#include <vector>
using namespace std;

vector<int> addBinary(vector<int> &A, vector<int> &B)
{
    int n = A.size();
    vector<int> C(n + 1, 0); // 初始化长度为n+1的数组C，全部赋值为0。
    int carry = 0;           // 初始化进位为0
    for (int i = 0; i < n; i++)
    {
        int sum = A[i] + B[i] + carry; // 计算当前位的和
        C[i] = sum % 2;                // 将和的个位保存到C数组中
        carry = sum / 2;               // 计算进位
    }
    C[n] = carry; // 将最后一次进位加到C的最高位上
    return C;     // 返回结果数组C
}

int main()
{
    string strA, strB;
    cout << "请输入两个二进制数：" << endl;
    cin >> strA >> strB;
    int n = strA.size();
    vector<int> A(n), B(n);
    for (int i = 0; i < n; i++)
    {
        A[i] = strA[i] - '0'; // 将字符转化为整数，存储在数组A中
        B[i] = strB[i] - '0'; // 将字符转化为整数，存储在数组B中
    }
    vector<int> C = addBinary(A, B); // 计算A和B的和
    cout << "计算结果为：";
    for (int i = n; i >= 0; i--)
    {
        cout << C[i]; // 从最高位向最低位输出结果
    }
    cout << endl;
    return 0;
}
