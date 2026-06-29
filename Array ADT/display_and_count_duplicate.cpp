#include <iostream>
using namespace std;

void displayAndCountDuolicate(int arr[], int len){
    int max = arr[0];

    for(int i = 0; i < len; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    int Hash[max+1] = {0};

    for(int i = 0; i < len; i++){
        Hash[arr[i]]++;
    }

    for(int i = 1; i < max+1; i++){
        if(Hash[i] > 1){
            cout<<i<<" occurs "<<Hash[i]<<" times"<<endl;
        }
    }
}

int main() 
{
    int arr[20] = {1, 2, 2, 3, 4, 4, 4, 5, 6, 6};
    int size = 10;

    displayAndCountDuolicate(arr, size);
}