#include <iostream>
using namespace std;

void hash_two_sum(int arr[], int len, int target){
    int max = arr[0];

    for(int i = 0; i < len; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    int Hash[max+1] = {0};

    for(int i = 0; i < len; i++){
        int x = target - arr[i];
        if(x >= 0 && x <= max && Hash[x] != 0){
            cout<<"Target found: "<<target-arr[i]<<" and "<<arr[i]<<endl;  
        }

        Hash[arr[i]] = Hash[arr[i]]+1;
    }
}

int main() 
{
    int arr[20] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int target = 10;
    int size = 10;


    hash_two_sum(arr, size, target);
}