#include <iostream>

using namespace std;
void pyramid(int currLevel,int n )
{
    if(currLevel>n)
    {
        return ;
    }
    int numSpace=n-currLevel;
    int numStar=2*currLevel-1;
    for(int i=0;i<numSpace;i++)
    {
        cout<<" ";
    }
    for(int i=0;i<numStar;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    pyramid(currLevel+1,n);
}

int main()
{
    int n;
    cin>>n;
    pyramid(1,n);
    return 0;
}
