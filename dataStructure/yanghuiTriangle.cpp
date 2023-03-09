/*
杨辉三角
ChatGPT给的解法
2023/3/7、8
*/
#include <iostream>
#include <queue>

using namespace std;

void generatePascalTriangle(int n)
{
    queue<int> q;
    q.push(1);

    for (int i = 1; i <= n; i++)
    {
        int prev = 0;
        cout << "Row " << i << ": ";

        for (int j = 0; j < i; j++)
        {
            int current = q.front();
            q.pop();

            cout << current << " ";

            int sum = prev + current;
            prev = current;
            q.push(sum);
        }

        q.push(1);
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    generatePascalTriangle(n);

    return 0;
}
