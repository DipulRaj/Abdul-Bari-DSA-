#include <iostream>
using namespace std;

void countDuplicate(int arr[], int len) {
    for (int i = 0; i < len - 1; i++) {
        if (arr[i] == arr[i + 1]) {

            int j = i + 1;

            while (j < len && arr[i] == arr[j]) {
                j++;
            }

            cout << arr[i] << " occurs " << j - i << " times" << endl;
            i = j - 1;
        }
    }
}

int main() 
{
    int arr[20] = {1, 2, 2, 3, 4, 4, 4, 5, 6, 6};
    int size = 10;

    countDuplicate(arr, size);
}