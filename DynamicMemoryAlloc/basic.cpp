#include <iostream>

using namespace std;
int main()
{
    //alllocate memory for integer
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 10;

    printf("Address of allocated memory: %u \n", ptr);
    printf("Value at address ptr: %d \n", *ptr);

    return 0;
}