#include <iostream>
using namespace std;

void two_sum_in_sorted_array(int arr[], int len, int target){
    int srt = 0;
    int end = len-1;

    while(srt < end){
        if(arr[srt] + arr[end] == target){
            cout<<"Target found: "<<arr[srt]<<" and "<<arr[end]<<endl;
            srt++;
            end--;
        }else if(arr[srt] + arr[end] > target){
            end--;
        }else{
            srt++;
        }
    }
}



int main() 
{
    int arr[20] = {2, 3,  5,  6,  7, 8, 9, 10, 14, 16};
    int target = 10;
    int size = 10;


    two_sum_in_sorted_array(arr, size, target);
}