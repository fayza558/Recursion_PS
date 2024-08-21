#include <iostream>
#include<vector>
using namespace std;
vector<int>v;
void rec(int n)
{
    v.push_back(n);
    if(n==1)
    {
        return ;
    }
    if(n%2==0)
    {
        rec(n/2);
    }
    else
    {
        rec((3*n)+1);
    }
}

int main()
{
    int n;
    cin>>n;
    rec(n);
    cout<<v.size()<<endl;

    return 0;
}
