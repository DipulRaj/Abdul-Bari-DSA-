#include <iostream>
using namespace std;

bool is_palindrome_string(char ch[]){
    int i;
    for(i = 0; ch[i] != '\0'; i++){

    }

    int srt, end;

    for(srt = 0, end = i - 1; srt < end; srt++, end--){
        if(ch[srt] != ch[end]){
            return false;
        }
    }

    return true;
}

int main() 
{
    char ch[] = "level";
    bool result = is_palindrome_string(ch);

    if(result){
        cout<<"Palindrome";
    }else{
        cout<<"Not Palindrome";
    }
}