#include <iostream>

using namespace std;

void leaders(int *arr, int n)
{
    int max = INT8_MIN;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] >= max)
        {
            cout << arr[i] << " ";
            max = arr[i];
        }
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

    leaders(arr, n);

    return 0;
}