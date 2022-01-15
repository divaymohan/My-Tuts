#include <iostream>

using namespace std;

int main()
{
    // & --> address of
    // * --> value at
    //address of n = 100
    //address of ptr = 200
    //address of ptr2ptr = 300
    int n = 10;
    int *ptr = &n;        // ptr = 100, *ptr = value at address 100 = 10;
    int **ptr2ptr = &ptr; //ptr2ptr = 200, *ptr2ptr = value at address 200 = 100,
    // **ptr2ptr = value at address (value at adrees 200 = 100 )  = 10;
    int ***ptr2ptr2ptr = &ptr2ptr;
    // ***ptr2ptr2ptre =  (value at adress (value at adress (value at address = 300)=200) = 100)=10
    printf("Direct value:- %d\n", n);
    printf("Direct value using pointer:- %d\n", *ptr);
    printf("Direct value using pointer to pointer:- %d\n", **ptr2ptr);

    printf("Direct address of n:-%u \n", &n);
    printf("Address of n using ptr:- %u\n", ptr);
    printf("Address of n using ptr2ptr:- %u\n", *ptr2ptr);

    printf("Address of ptr using ptr2ptr2ptr %u\n", **ptr2ptr2ptr); //
    printf("Address of ptr using ptr %u\n", &ptr);

    return 0;
}