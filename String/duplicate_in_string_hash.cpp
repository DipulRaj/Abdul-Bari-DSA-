#include <iostream>
using namespace std;

void duplicate_string(char ch[]){
    int H[26] = {0};
    int i, j;

    for(i = 0; ch[i] != '\0'; i++){
        H[ch[i] - 97]++;
    }

    for(j = 0; j < 26; j++){
        if(H[j] > 1){
            cout<<char('a' + j) << " occurs " << H[j] << " times." << endl;
        }
    }
}

int main() 
{
    char ch[] = "dipulraaja";
    duplicate_string(ch);
}