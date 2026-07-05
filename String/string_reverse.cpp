#include <iostream>
using namespace std;

void reverse_string(char ch[]){
    int i, temp;
    for(i = 0; ch[i] != '\0'; i++){

    }
    i = i - 1;

    
    for(int j = 0; j < i; j++, i--){
        temp = ch[j];
        ch[j] = ch[i];
        ch[i] = temp;
    }

}

int main() 
{
    char ch[] = "Sharma";
    reverse_string(ch);
    cout<<ch<<endl;
}