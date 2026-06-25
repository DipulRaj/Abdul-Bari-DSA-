#include <iostream>
using namespace std;

struct Array{
    //creating array in heap;
    int *A;
    int size;
    int length;
};

void display(struct Array arr){
    for(int i = 0; i < arr.length; i++){
        cout<<arr.A[i]<<"  ";
    }
}

int main(){
    struct Array arr;

    cout<<"Enter size of array: ";
    cin>>arr.size;

    arr.A = new int[arr.size];

    cout<<"Enter length of array: ";
    cin>>arr.length;

    cout<<"Taking input in array: "<<endl;
    for(int i = 0; i < arr.length; i++){
        cin>>arr.A[i];
    }

    cout<<"printing all array elements: ";
    display(arr);
    cout<<endl<<"Program ended";
}