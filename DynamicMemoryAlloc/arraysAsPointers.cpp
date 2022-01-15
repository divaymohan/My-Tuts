#include <iostream>

using namespace std;

int main()
{
    //check the behaviour of arrays
    int arr[4];
    *(arr + 0) = 1; //arr[0]
    *(arr + 1) = 2; //arr[1]
    *(arr + 2) = 3; //arr[2]
    *(arr + 3) = 4; //arr[3]

    printf("Values are: %d,%d,%d,%d", *(arr + 0), *(arr + 1), *(arr + 2), *(arr + 3));

    arr[0] = 4;
    arr[1] = 5;
    arr[2] = 6;
    arr[3] = 7;

    printf("Values are: %d,%d,%d,%d", arr[0], arr[1], arr[2], arr[3]);

    return 0;
}