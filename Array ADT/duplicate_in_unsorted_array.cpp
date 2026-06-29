#include <iostream>
using namespace std;

void duplicate_in_unsorted(int arr[], int len){
    for(int i = 0; i < len-1; i++){
       if(arr[i] != -1){
          int count = 1;
          for(int j = i + 1; j < len; j++){
              if(arr[i] == arr[j]){
                  count++;
                  arr[j] = -1;
                }
            }

            if(count > 1){
                cout<<arr[i]<<" occurs "<<count<<" times "<<endl;
            }
       }  
    }
}

int main() 
{
    int arr[20] = {4, 3, 2, 7, 8, 2, 3, 1};
    int size = 8;

    duplicate_in_unsorted(arr, size);
}