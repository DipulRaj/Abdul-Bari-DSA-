#include <iostream>
using namespace std;

void Word_count(char ch[]){
    int count = 1;
    for(int i = 0; ch[i] != '\0'; i++){
        if(ch[i] == ' ' && ch[i-1] != ' '){
            count++;
        }
    }

    cout<<"Number of words are: "<<count<<endl;
}


int main() 
{
    char ch[] = "The quick, brown   fox... jumped   over 5 lazy dogs!";
    Word_count(ch);
}