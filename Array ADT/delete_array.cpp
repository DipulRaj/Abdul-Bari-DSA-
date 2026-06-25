#include <iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void Delete(struct Array *arr, int idx){
    if(idx >= 0 && idx < arr -> length){
        for(int i = idx; i < arr -> length-1; i++){
            arr ->A [i] = arr -> A[i+1];
        }

        arr -> length--;
    }
}

void Display(struct Array arr){
    cout<<"Displaying array element: ";
    for(int i = 0; i < arr.length; i++){
        cout<<arr.A[i]<<"  ";
    }

    cout<<endl;
}

int main(){
    struct Array arr = {{20, 12, 13, 23, 25}, 10, 5};
    Display(arr);

    cout<<"Displaying array after deletion: "<<endl;
    Delete(&arr, 0);
    Display(arr);
}