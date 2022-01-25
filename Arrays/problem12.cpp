#include <iostream>

using namespace std;
int _bitonicPoint(int *arr, int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        //to check bitonic point
        if (arr[mid - 1] <= arr[mid] && arr[mid] >= arr[mid + 1])
        {
            return arr[mid];
        }
        //to check if bitonic point is in the right side
        else if (arr[mid - 1] < arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return arr[n - 1];
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
    if (n == 1)
    {
        cout << "Bitonic point is :" << arr[0] << endl;
        return 0;
    }

    int val = _bitonicPoint(arr, n);
    cout << "Bitonic point is :" << val << endl;

    return 0;
}