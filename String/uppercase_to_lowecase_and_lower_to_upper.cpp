#include <iostream>
using namespace std;

void upperCase_to_lowerCase(char ch[]){
    for(int i = 0; ch[i] != '\0'; i++){
        if(ch[i] >= 65 && ch[i] <= 'Z'){
            ch[i]+=32;
        }
    }
}


void lowerCase_to_upperCase(char ch[]){
    for(int i = 0; ch[i] != '\0'; i++){
        if(ch[i] >= 97 && ch[i] <= 122){
            ch[i]-=32;
        }
    }
}


void toggleCase(char ch[]){
    for(int i = 0; ch[i] != '\0'; i++){
        if(ch[i] >= 65 && ch[i] <= 90){
            ch[i]+=32;
        }else if(ch[i] >= 97 && ch[i] <= 122){
            ch[i]-=32;
        }
    }
}


int main() 
{
    char ch[] = "dIpULraJ390";
    int i;

    toggleCase(ch);
    cout<<ch;
    cout<<endl;

    upperCase_to_lowerCase(ch);
    cout<<ch;
    cout<<endl;

    lowerCase_to_upperCase(ch);
    cout<<ch;
    cout<<endl;
}