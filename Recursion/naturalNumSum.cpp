#include <stdio.h>
#include <iostream>
using namespace std;

int sum(int n){
    if(n == 0){
        return 0;
    }else{
        return sum(n - 1) + n;
    }
}

int sum1(int n){
    int s = 0;
    for(int i = 1; i <= n; i++){
        s += i;
    }
    return s;
}



int main(){
    int r = sum(5);
    printf("Result: %d\n ", r);

    int r1 = sum1(5);
    printf("Result_2: %d\n ", r1);
}