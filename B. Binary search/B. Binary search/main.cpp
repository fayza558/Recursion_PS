//time limit
#include <iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int >&v,int target,int i=0)
{
        if(i>=v.size())
        {
            return -1;
        }
        if(target==v[i])
        {
            return i+1;
        }
    return   binarySearch(v,target,i+1);

}

int main()
{
    int n;
    cin>>n;
     vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int target;
        cin>>target;
       cout<< binarySearch(v,target)<<endl;
    }
    return 0;
}



#include <iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>&v,int target,int left,int right)
{
    if(left>right)
    {
       return -1;
    }
    int mid=left+(right-left)/2;
    if(v[mid]==target)
    {
        return mid+1;
    }
    if(v[mid]>target)
    {
        return binarySearch(v,target,left,mid-1);
    }
    else

    {
         return   binarySearch(v,target,mid+1,right);

    }


}

int main()
{
    int n;
    cin>>n;
     vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int target;
        cin>>target;
       cout<< binarySearch(v,target,0,v.size()-1)<<endl;
    }
    return 0;
}
