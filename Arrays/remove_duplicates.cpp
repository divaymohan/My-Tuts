#include <iostream>

using namespace std;

int removeDuplicates(int *arr, int n)
{
    int i = 0;
    int j = 1;
    while (j < n)
    {
        if (arr[j] != arr[j - 1])
        {
            i++;
            arr[i] = arr[j];
        }
        j++;
    }
    return i + 1;
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

    int newN = removeDuplicates(arr, n);
    cout << "New Length: " << newN << endl;

    for (int i = 0; i < newN; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}