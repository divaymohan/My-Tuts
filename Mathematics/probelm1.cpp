#include<bits/stdc++.h>

using namespace std;

int countDigits(long n){
    int count = 0;
    while(n!=0){
        n = n/10;
        ++count;
    }
    return count;
}

int countDigits(long n){
    if(n==0) return 0;
    return 1+countDigits(n/10);
}

int countDigits(long n){
    return floor(log10(n)+1);
}

int main(){
    int n  = 2435;
    cout<<countDigits(n);
    return 0;
}