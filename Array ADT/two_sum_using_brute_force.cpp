#include <iostream>
using namespace std;


void two_sum(int arr[], int len, int target){
    for(int i = 0; i < len-1; i++){
        for(int j = i + 1; j < len; j++){
            if(arr[i]+arr[j] == target){
                cout<<"Target found: "<<arr[i]<<" and "<<arr[j]<<endl;
            }
        }
    }
}

int main() 
{
    int arr[20] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int target = 10;
    int size = 10;


    two_sum(arr, size, target);
}