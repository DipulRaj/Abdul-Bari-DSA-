#include <iostream>
using namespace std;

bool is_valid_string(char ch[]){
    for(int i = 0; ch[i] != '\0'; i++){
        if(!(ch[i] >= 'A' && ch[i] <= 'Z') && !(ch[i] >= 'a' && ch[i] <= 'z') && !(ch[i] >= 48 && ch[i] <= 57)){
            return false;
        }
    }

    return true;
}

int main() 
{
    char ch[] = "DipulSharma";
    bool result = is_valid_string(ch);

    if(result){
        cout<<"Valid String"<<endl;
    }else{
         cout<<"Not Valid String"<<endl;
    }
}