#include <iostream>
using namespace std;

int main() 
{
    int arr[] = {4, 1, 7, 2, 8, 3};
    int len = sizeof(arr)/4;
    int size = 8+1;

    int newArr[size] = {0};

   for(int i = 0; i < len; i++){
      newArr[arr[i]] = 1;
   }

   for(int i = 1; i < size; i++){
    if(newArr[i] != 1){
        cout<<i<<"  ";
    }
   }
}