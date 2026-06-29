#include <iostream>
using namespace std;

void findDuplicate(int arr[], int len){
    int previousDuplicate = 0;

    for(int i = 1; i < len; i++){
        if(arr[i] == arr[i-1] && arr[i] != previousDuplicate){
            previousDuplicate = arr[i];
            cout<<previousDuplicate<<"  ";
        }
    }
}

int main() 
{
    int arr[20] = {1, 2, 2, 3, 4, 4, 4, 5, 6, 6};
    int size = 10;

    findDuplicate(arr, size);
}