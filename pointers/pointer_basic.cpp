#include <iostream>

using namespace std;

int main()
{
    // & --> address of
    // * --> value
    int n = 8;
    int *ptr = &n;
    printf("Printing direct value:- %d\n", n);
    printf("Printing value with pointer:- %d\n", *(&n));
    printf("Printing address of n:- %u\n", &n);

    printf("printting adress of n using pointer variable:- %d\n", ptr);
    printf("Printing value of n using pointer:- %u\n ", *ptr);

    return 0;
}