/*
c++上机实验第二周：无重复字符的最长字串问题
2023-3-8、9
*/
#include <iostream>
#include <string>
#include <map>
using namespace std;
// 函数声明
int longestSubstring(string s);

int main()
{
    string s;
    cin >> s;
    int max_subsize = longestSubstring(s);
    cout << max_subsize;
    return 0;
}

int longestSubstring(string s)
{
    // 初始化变量包括起始位置，最大子字符串的长度，需要遍历的字符的数量
    // 以及一个保存字符与位置关系的map映射关系
    int ans = 0;
    int start = 0;
    int n = s.length();
    map<char, int> mp;
    // 使用for循环遍历自字符串中的所有字符
    for (int i = 0; i < n; i++)
    {
        // 记录当前读取的字符值
        char alpha = s[i];
        // 如果map中当前alpha对应的值非空，则说明当前子字符串中包含该字符，
        // 需要做的操作是更新start的位置为第一个alpha出现位置的后一位
        if (mp.count(alpha))
        {
            start = max(start, mp[alpha] + 1);
        }
        // 更新当前的ans值
        ans = max(ans, i - start + 1);
        // 更新当前alpha的位置
        mp[alpha] = i;
    }
    // 返回结果
    return ans;
}