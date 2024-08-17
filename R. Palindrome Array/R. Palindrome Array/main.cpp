
#include <iostream>

using namespace std;
int arr[100005];
int n;
bool flag=true;
void Palindrom(int left,int right)
{
    if(left==n/2)
    {
        return ;
    }
    if(arr[left]!=arr[right])
    {
        flag=false;
    }
    Palindrom(left+1,right-1);
}

int main()
{

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Palindrom(0,n-1);
    if(flag)
    {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}

//another solution with simple changes

#include <iostream>

using namespace std;
int arr[100005];
int n;

bool Palindrom(int left,int right)
{
    if(left==n/2)
    {
        return true;
    }
    bool flag=true;
    if(arr[left]!=arr[right])
    {
        flag=false;
    }
   return (flag& Palindrom(left+1,right-1));
}

int main()
{

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    if(Palindrom(0,n-1))
    {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
