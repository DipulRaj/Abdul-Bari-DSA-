#include <stdio.h>
#include <iostream>
using namespace std;

int pow(int m, int n){
    if(n == 0){
        return 1;
    }
    return pow(m, n - 1)*m;
}

int pow1(int m, int n){
    if(n == 0){
        return 1;
    }

    if(n % 2 == 0){
        return pow(m * m, n/2);
    }else{
        return m * pow(m * m, (n+1)/2);
    }
}

int main(){
    int p = pow(2, 5);
    printf("Power: %d", p);

    int p1 = pow(2, 5);
    printf("\nPower: %d", p1);
}