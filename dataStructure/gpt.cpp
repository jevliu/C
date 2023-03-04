#include <iostream>

using namespace std;

int getMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void countSort(int arr[], int n, int exp)
{
    const int MAX = 100;
    int bucket[10] = {0};
    int output[MAX];
    for (int i = 0; i < n; i++)
    {
        bucket[(arr[i] / exp) % 10]++;
    }
    for (int i = 1; i < 10; i++)
    {
        bucket[i] += bucket[i - 1];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        output[bucket[(arr[i] / exp) % 10] - 1] = arr[i];
        bucket[(arr[i] / exp) % 10]--;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

void radixSort(int arr[], int n)
{
    int max = getMax(arr, n);
    for (int exp = 1; max / exp > 0; exp *= 10)
    {
        countSort(arr, n, exp);
        for (int i = 0; i < n - 1; i++)
        {
            cout << arr[i] << " ";
        }
        cout << arr[n - 1] << endl;
    }
}

int main()
{
    const int MAX = 100;
    int arr[MAX];
    int n = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    radixSort(arr, n);

    return 0;
}
