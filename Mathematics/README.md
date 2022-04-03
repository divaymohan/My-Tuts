# Concepts:- 

1. Finding Number of digits in a number 

* Iterative solution:- 

```
int countDigits(long n){
    int count = 0;
    while(n!=0){
        n = n/10;
        ++count;
    }
    return count;
}
```

* Recursive solution:- 

```
int countDigits(long n){
    if(n==0) return 0;
    return 1+countDigits(n/10);
}
```

* logrithmic solution
```
int countDigits(long n){
    return floor(log10(n)+1);
}

```

2. Arithmatic and geometric progressions
