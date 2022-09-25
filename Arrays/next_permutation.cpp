#include <iostream>

using namespace std;
void next_permutation(int *arr, int n)
{
    int index = -1;
    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i - 1] < arr[i])
        {
            index = i - 1;
            break;
        }
    }
    if (index != -1)
    {
        for (int i = n - 1; i > index; i--)
        {
            if (arr[i] > arr[index])
            {
                int temp = arr[i];
                arr[i] = arr[index];
                arr[index] = temp;
                break;
            }
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

    next_permutation(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}