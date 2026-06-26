#include <iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

struct Array* merge_array(struct Array *arr1, struct Array *arr2){
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3 = new Array;
    while(i < arr1->length && j < arr2->length){
        if(arr1->A[i] < arr2->A[j]){
            arr3->A[k++] = arr1->A[i++];
        }else{
            arr3->A[k++] = arr2->A[j++];
        }
    }

    for(; i < arr1->length; i++){
        arr3->A[k++] = arr1->A[i];
    }

    for(; j < arr2->length; j++){
        arr3->A[k++] = arr2->A[j]; 
    }

    arr3->length = arr1->length+arr2->length;
    arr3->size = 10;
    return arr3;
}

void display(struct Array arr){
    for(int i = 0; i < arr.length; i++){
        cout<<arr.A[i]<<"  ";
    }
}

int main(){
    struct Array arr1 = {{1, 3, 5, 7}, 10, 4};
    struct Array arr2 = {{2, 4, 6}, 10, 3};

    struct Array *arr3;
    arr3 = merge_array(& arr1, & arr2);
    display(*arr3);
}