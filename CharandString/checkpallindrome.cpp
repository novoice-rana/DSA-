#include <iostream>
#include <cstring>
using namespace std;

bool checkpallindrome(char ch[],int len){
    int i=0;
    int j=len-1;
    while(i<j){
        if(ch[i]!=ch[j]){
            return false;
        }
        
        i++;
        j--;
    }
    return true;

}

int main() {
    char ch[100];
    cin >> ch;

    int len = strlen(ch);

    if (checkpallindrome(ch,len)){
        cout<<"this is a pallindrome";
    }else{
        cout<<" this is not a pallindrome";
    }
    
    



    return 0;
}