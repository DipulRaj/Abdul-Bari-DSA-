#include <iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;

};

void display(struct Array arr){
    cout<<"Displaying array elements: ";
    for(int i = 0; i < arr.length; i++){
        cout<<arr.A[i]<<", ";
    }
    cout<<endl;
}

void append(struct Array *arr, int val){
    if(arr -> size > arr -> length){
        arr -> A[arr -> length++] = val;
    }
}

void insert(struct Array *arr, int idx, int val){
    if(idx >= 0 && idx <= arr -> length){
        for(int i = arr -> length; i > idx; i--){
            arr -> A[i] = arr -> A[i-1];
        }

        arr -> A[idx] = val;
        arr -> length++;
    }
}

int main(){
    struct Array arr = {{5, 7, 9, 15, 8}, 10, 5};
    display(arr);

    cout<<"Calling after append: "<<endl;
    // append(&arr, 20);
    insert(&arr, 2, 78);
    display(arr);
}