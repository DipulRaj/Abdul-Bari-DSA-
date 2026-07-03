#include <iostream>
using namespace std;

void count_vowel_and_consonant(char ch[]){

    //covert in uppercase or lowercase
    for(int i = 0; ch[i] != '\0'; i++){
        if(ch[i] >= 97 && ch[i] <= 122){
            ch[i] -= 32;
        }
    }

    int vowelCount = 0;
    int consonantCount = 0;

    for(int j = 0; ch[j] != '\0'; j++){
        if(ch[j] == 'A' || ch[j] == 'E' || ch[j] == 'I' || ch[j] == 'O' || ch[j] == 'U'){
            vowelCount++;
        }else if(ch[j] >= 'A' && ch[j] <= 'Z'){
            consonantCount++;
        }
    }

    cout<<"No. of vowels: "<<vowelCount<<endl;
    cout<<"No. of consonants: "<<consonantCount<<endl;
}


int main() 
{
    char ch[] = "The quick brown fox jumps over the lazy dog";
    int i;

   count_vowel_and_consonant(ch);
}