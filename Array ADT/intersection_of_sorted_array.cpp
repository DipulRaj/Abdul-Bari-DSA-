#include <iostream>
using namespace std;

int* intersection_of_array(int arr1[], int arr2[], int n1, int n2, int &len){

    int *Arr3 = new int[min(n1, n2)];

    int i, j, k;
    i = j = k = 0;

    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            i++;
        }else if(arr1[i] > arr2[j]){
            j++;
        }else{
            Arr3[k] = arr1[i];
            i++;
            j++;
            k++;
        }
    }

    len = k;

    return Arr3;
}

int main() 
{
    int arr1[4] = {1, 2, 3, 4};
    int arr2[4] = {3, 4, 5, 6};

    int len;

    int *Res = intersection_of_array(arr1, arr2, 4, 4, len);

    for(int i = 0; i < len; i++){
        cout<<Res[i]<<"  ";
    }

    delete[] Res;
}