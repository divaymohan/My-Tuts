#include <iostream>

using namespace std;

int main()
{
    //Allocate memory of size int and store 4 chars in it.
    char *ptr = (char *)malloc(sizeof(int));
    *ptr = '1';
    *(ptr + 1) = 'a';
    *(ptr + 2) = 'b';
    *(ptr + 3) = 'c';
    printf("Values are %c,%c,%c,%c", *ptr, *(ptr + 1), *(ptr + 2), *(ptr + 3));

    return 0;
}