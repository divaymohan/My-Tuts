#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int vis[n + 1] = {0};
    int map[n + 1] = {0};

    for (int i = 1; i <= n; i++)
    {
        map[arr[i]] = i;
    }

    //count cycles
    int TotalSwaps = 0;
    for (int i = 1; i <= n; i++)
    {
        int cycleSize = 0;
        if (arr[i] == i)
        {
            continue;
        }

        int j = arr[i];
        while (!map[j])
        {
            cycleSize++;
            j = map[j];
        }

        if (cycleSize > 0)
        {
            TotalSwaps += (cycleSize - 1);
        }
    }
    cout << TotalSwaps;

    return 0;
}