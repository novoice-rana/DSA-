#include <iostream>
using namespace std;

int lengthOfStr(char ch[], int size) {
    int i = 0;
    while (ch[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char ch[100];
    cin >> ch;

    int len = lengthOfStr(ch, 100);
    cout << len;

    return 0;
}