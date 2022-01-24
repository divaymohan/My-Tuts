#include <iostream>

using namespace std;

void sort_(int *arr, int n)
{
    int zeros = 0;
    int ones = 0;
    int twos = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            zeros++;
        else if (arr[i] == 1)
            ones++;
        else
            twos++;
    }
    int j = 0;
    for (j = 0; j < zeros; j++)
    {
        arr[j] = 0;
    }
    for (; j < n - twos; j++)
    {
        arr[j] = 1;
    }
    for (; j < n; j++)
    {
        arr[j] = 2;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort_(arr, n);

    //output
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}