#include <iostream>
#include <cstring>
using namespace std;

void revOfStrrev(char ch[], int n) {
    int i = 0;
    int j = n - 1;

    while (i < j) {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}

int main() {
    char ch[100];
    cin >> ch;

    int len = strlen(ch);

    revOfStrrev(ch, len);

    cout << ch;

    return 0;
}