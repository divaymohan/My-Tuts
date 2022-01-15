#include <iostream>

using namespace std;

int main()
{
    // & --> address of
    // * --> value at
    int n = 8;
    int *ptr = &n;
    printf("Printing direct value:- %d\n", n);
    printf("Printing value with pointer:- %d\n", *(&n)); //value at(address of n)
    printf("Printing address of n:- %u\n", &n);          //address of n

    printf("printting adress of n using pointer variable:- %d\n", ptr); //address
    printf("Printing value of n using pointer:- %u\n ", *ptr);          //value at (address)

    return 0;
}