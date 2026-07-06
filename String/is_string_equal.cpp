#include <iostream>
using namespace std;

void comapre_string(char ch1[], char ch2[]){
    int i, j;

    for(i = 0, j = 0; ch1[i] != '\0' && ch2[j] != '\0'; i++, j++){
        if(ch1[i] != ch2[j]){
            break;
        }
    }

    if(ch1[i] == ch2[j]){
        cout<<"Both are equal";
    }else if(ch1[i] > ch2[j]){
        cout<<ch1<<" is greater";
    }else{
        cout<<ch2<<" is greater";
    }
}

int main() 
{
    char ch1[] = "Dipul";
    char ch2[] = "Dipul";

    comapre_string(ch1, ch2);
}