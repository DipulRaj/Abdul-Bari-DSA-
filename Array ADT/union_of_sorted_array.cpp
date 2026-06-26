#include <iostream>
using namespace std;

int* union_of_array(int arr1[], int arr2[], int n1, int n2, int &len){
    int n3 = n1 + n2;

    int *Arr3 = new int[n3];

    int i, j, k;
    i = j = k = 0;

    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            Arr3[k] = arr1[i];
            i++;
            k++;
        }else if(arr1[i] > arr2[j]){
            Arr3[k] = arr2[j];
            j++;
            k++;
        }else{
            Arr3[k] = arr1[i];
            i++;
            j++;
            k++;
        }
    }

    for(; i < n1; i++){
        Arr3[k] = arr1[i];
        k++;
    }

    for(; j < n2; j++){
        Arr3[k] = arr2[j];
        k++;
    }

    len = k;

    return Arr3;
}

int main() 
{
    int arr1[4] = {1, 2, 3, 4};
    int arr2[4] = {3, 4, 5, 6};

    int len;

    int *Res = union_of_array(arr1, arr2, 4, 4, len);

    for(int i = 0; i < len; i++){
        cout<<Res[i]<<"  ";
    }

    delete[] Res;
}