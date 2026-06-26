#include <iostream>
using namespace std;

int* differences_in_array(int arr1[], int arr2[], int n1, int n2, int &len){

    int *Arr3 = new int[n1];

    int i, j, k;
    i = j = k = 0;

    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            Arr3[k] = arr1[i];
            i++;
            k++;
        }else if(arr1[i] > arr2[j]){
            j++;
        }else{
            i++;
            j++;
        }
    }

    for(; i < n1; i++){
        Arr3[k] = arr1[i];
        k++;
    }

    len = k;

    return Arr3;
}

int main() 
{
    int arr1[] = {1, 2, 3, 4, 7, 10};
    int arr2[] = {3, 4, 5, 6};

    int len;

    int *Res = differences_in_array(arr1, arr2, 6, 4, len);

    for(int i = 0; i < len; i++){
        cout<<Res[i]<<"  ";
    }
}