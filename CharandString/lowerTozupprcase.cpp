#include <iostream>
#include <cstring>
using namespace std;

char toUpperCase(char ch[],int n){
    int i=0;
    while(ch[i]!='\0'){
        char currChar=ch[i];
        if(currChar>='a' && currChar<='z'){
            ch[i]=currChar-'a'+'A';
        }
        i++;

    }
}

int main() {
    char ch[100];
    cin >> ch;

    int len = strlen(ch);

    toUpperCase(ch,len);

    cout << ch;

    return 0;
}