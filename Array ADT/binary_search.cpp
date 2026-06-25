#include <iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

int binarySearch(struct Array arr, int key){
    int srt = 0;
    int end = arr.length-1;
    int mid = (srt+end)/2;

    while(srt <= end){
        if(arr.A[mid] == key){
            return mid;
        }else if(arr.A[mid] < key){
            srt = mid+1;
        }else{
            end = mid-1;
        }
        mid = (srt+end)/2;
    }
    return -1;
}

//Using Recursion 
int Rbinary_search(int arr[], int srt, int end, int key){
    int mid;
    if(srt <= end){
        mid = (srt+end)/2;

        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] > key){
            return Rbinary_search(arr, srt, mid-1, key);
        }else{
            return Rbinary_search(arr, mid+1, end, key);
        }
    }
    return -1;
}

int main(){
    struct Array arr = {{2, 5, 7, 9, 14, 17}, 10, 6};
    // cout<<binarySearch(arr, 17)<<endl;

    cout<<Rbinary_search(arr.A, 0, arr.length, 10)<<endl;
}