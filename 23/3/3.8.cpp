/*
c++数据类型练习
2023/3/8
*/
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
    // long code;
    // cin >> code;
    // cout << "You entered " << code << "...\n";
    cout << "Let them eat g\u00E2teau\n";
    // wchat_t类型输出
    wcout << L"Tall\n";
    // 特定长度的字符类型
    char16_t ch1 = u'q';
    char32_t ch2 = U'\U0000222B';
    // 符号常量限定符const
    const int Months = 12;

    return 0;
}