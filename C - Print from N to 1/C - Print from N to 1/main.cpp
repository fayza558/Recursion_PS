#include <iostream>
using namespace std;

void printNumber(int n)
{
    if (n == 0)
    {
        return;
    }
    if(n==1)
    {
       cout << n ;
    }
    else
    {
        cout << n << " ";
    }
    printNumber(n - 1);


}

int main()
{
    int n;
    cin >> n;
    printNumber(n);
    return 0;
}
