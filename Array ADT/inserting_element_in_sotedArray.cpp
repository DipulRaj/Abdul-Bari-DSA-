#include <iostream>
using namespace std;
struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    for(int i = 0; i < arr.length; i++){
        cout<<arr.A[i]<<"  ";
    }
}

void insert_element(struct Array *arr, int val){
    int i = arr->length-1;
    while(i >= 0 && arr->A[i] > val){
        arr->A[i+1] = arr->A[i];
        i--;
    }

    arr->A[i+1] = val;
    arr->length++;
}

int main(){
    struct Array arr = {{5, 7, 8, 12, 15}, 10, 5};
    Display(arr);
    cout<<endl<<"Print array after value insert"<<endl;

    insert_element(&arr, 4);
    Display(arr);
}