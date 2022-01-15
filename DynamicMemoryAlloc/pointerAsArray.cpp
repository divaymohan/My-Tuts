#include <iostream>

using namespace std;

int main()
{
    char *ptr = (char *)malloc(sizeof(char) * 4);
    *ptr = '1';       //ptr[0]
    *(ptr + 1) = 'a'; //ptr[1]
    *(ptr + 2) = 'b'; //ptr[2]
    *(ptr + 3) = 'c'; //ptr[3]

    printf("Values are: %c,%c,%c,%c", *(ptr + 0), *(ptr + 1), *(ptr + 2), *(ptr + 3));

    ptr[0] = 'f';
    ptr[1] = 'g';
    ptr[2] = 'h';
    ptr[3] = 'i';

    printf("Values are: %c,%c,%c,%c", ptr[0], ptr[1], ptr[2], ptr[3]);

    return 0;
}