#include <iostream>
using namespace std;

int missing_element(int arr[], int len);

void morethan_one_missing_element(int arr[], int len);

int main() 
{
    int arr[] = {6, 7, 8, 10, 11, 13, 14, 17};
    int len = sizeof(arr)/4;

    morethan_one_missing_element(arr, len);
}

int missing_element(int arr[], int len){

    int total_e = len+1;
    int s = (total_e * (total_e + 1))/2;

    int sum = 0;

    for(int i = 0; i < len; i++){
        sum += arr[i];
    }

    return s - sum;

}


void morethan_one_missing_element(int arr[], int len)
{
    int diff = arr[0];

    for(int i = 0; i < len; i++)
    {
        if(arr[i] - i != diff)
        {
            while(diff < arr[i] - i)
            {
                cout << i + diff << endl;
                diff++;
            }
        }
    }
}

