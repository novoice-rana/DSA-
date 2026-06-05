#include <iostream>
#include <cstring>
using namespace std;

void replaceWithSpace(char ch[],int len ){
    int index =0;
    while(index<len){
        if(ch[index]=='@'){
            ch[index]=' ';
        }
        index++;

    }

}


int main() {
    char ch[100];
    cin >> ch;

    int len = strlen(ch);

    replaceWithSpace(ch, len);

    cout << ch;

    return 0;
}