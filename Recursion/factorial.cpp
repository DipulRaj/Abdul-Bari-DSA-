#include <stdio.h>
#include <iostream>

int fact(int n){
    if(n == 0){
        return 1;
    }
    return fact(n - 1)*n;
}

int main(){
    int f = fact(5);
    printf("Factorial: %d", f); 
}