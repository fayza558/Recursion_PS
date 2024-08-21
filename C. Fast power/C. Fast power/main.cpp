#include <iostream>
const int MOD=1000000007;
using namespace std;
int  power(long long n,long long  m)
{
    if(m==0)
    {
        return 1;
    }
    long long half =power(n,m/2);
    half=(half*half)%MOD;
    if(m%2!=0)
    {
        half=(half*n)%MOD;
    }
    return half;

}

int main()
{
    long long  n,m;
    cin>>n>>m;
    n=n%MOD;
    cout<<power(n,m)<<endl;
    return 0;
}



