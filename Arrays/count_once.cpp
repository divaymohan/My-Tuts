#include <iostream>

using namespace std;
int count_once(int *arr, int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == 1 && arr[mid + 1] == 0)
        {
            return mid;
        }
        else if (arr[mid] == 1)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
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

    int trans = count_once(arr, n);

    if (trans == -1)
    {
        if (arr[0] == 0)
        {
            cout << n;
        }
        else
        {
            cout << 0;
        }
    }
    else
    {
        cout << n - trans - 1;
    }
    return 0;
}