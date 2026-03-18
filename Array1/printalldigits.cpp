#include <iostream>
using namespace std;
void printdigit(int num)
{
    
    if (num == 0)
    {
        return;
    }
    printdigit(num / 10);
    cout << num % 10;
}
int main()
{
    printdigit(123);
}
