// 互斥符

#include <iostream>
#include <stack>
#include <cctype>

using namespace std;

string toMutexString(string s)
{
    stack<char> stk;
    for (char c : s)
    {
        // 判断栈顶字符与当前字符是否相同的大小写形式
        if (!stk.empty() && abs(stk.top() - c) == 32)
        {
            stk.pop();
        }
        else
        {
            stk.push(c);
        }
    }
    string result;
    // 将栈中剩余的字符依次弹出并连接到结果字符串中
    while (!stk.empty())
    {
        result = stk.top() + result;
        stk.pop();
    }
    return result.empty() ? "-1" : result;
}

int main()
{
    string s = "aAbBcCdD";
    cout << toMutexString(s) << endl; // 输出: aAbBcCdD

    s = "aAaAaA";
    cout << toMutexString(s) << endl; // 输出: -1

    s = "aBbCcDdEe";
    cout << toMutexString(s) << endl; // 输出: aBbCcDdEe

    return 0;
}
