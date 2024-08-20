#include <iostream>

using namespace std;
bool flag =false;
long long  n;
void rec(int curr)
{
    if(curr==n)
    {
        flag=true;
        return;
    }
    if(curr>n)
    {
        return;
    }
    rec(curr*10);
    rec(curr*20);

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        flag=false;
        rec(1);
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }



    return 0;
}
