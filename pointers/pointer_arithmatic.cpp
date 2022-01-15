#include <iostream>

using namespace std;

int main()
{
    // & --> address of
    // * --> value

    int n = 8;
    int *ptr = &n;

    printf("%d \n", sizeof(int));
    printf("%d \n", ptr);
    printf("%d \n", ptr + 2);

    char c = 'c';
    char *cptr = &c;
    printf("%d\n", sizeof(c));
    printf("%u\n", cptr);
    printf("%u\n", cptr + 1);

    return 0;
}