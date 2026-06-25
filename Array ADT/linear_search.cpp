#include <iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

int linear_search(struct Array arr, int key){
    for(int i = 0; i < arr.length; i++){
        if(arr.A[i] == key){
            return i;
        }
    }

    return -1;
}

int main(){
    struct Array arr = {{12, 14, 5, 18, 17}, 10, 5};

    int ans = linear_search(arr, 85);
    cout<<ans;
}