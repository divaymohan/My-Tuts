#include <iostream>

using namespace std;

int main()
{
    //read n integers from user
    int n;
    cin >> n;

    //integer array
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //output
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}