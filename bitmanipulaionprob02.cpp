//WAP TO COUNT THE NUMBER OF ONES IN BINARY REPRESENTATION OF A NUMBER
#include <iostream>
using namespace std;

int numberofones(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    cout << numberofones(24);
    return 0;
}