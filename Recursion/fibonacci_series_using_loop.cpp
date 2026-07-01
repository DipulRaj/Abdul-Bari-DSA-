#include <iostream>
using namespace std;

void find_min_and_max(int arr[], int len) {
    int min = arr[0], max = arr[0];

    for (int i = 1; i < len; i++) {
        if (arr[i] > max)
            max = arr[i];
        else if (arr[i] < min)
            min = arr[i];
    }

    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
}


void fibonacci_series(int n){
    if(n <= 0) return;

    int first = 0, second = 1;

    cout << first << " ";

    if(n == 1) return;

    cout << second << " ";

    for(int i = 3; i <= n; i++){
        int last = first + second;
        cout << last << " ";
        first = second;
        second = last;
    }
}


int main() 
{
   fibonacci_series(10);
}