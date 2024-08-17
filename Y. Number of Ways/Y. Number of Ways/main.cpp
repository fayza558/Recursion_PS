#include <iostream>

using namespace std;
int start,endd,cntr;
void rec(int curr)
{
    if(curr==endd)
    {
        cntr++;
        return ;
    }
    if(curr>endd) return ;
    rec(curr+1);
    rec(curr+2);
    rec(curr+3);
}

int main()
{
   cin>>start>>endd;
   rec(start);
   cout<<cntr<<endl;
    return 0;
}

#include <iostream>

using namespace std;
int start,endd;
int rec(int curr)
{
    int cntr=0;
    if(curr==endd)
    {

        return 1;
    }
    if(curr>endd) return 0;
   return  rec(curr+1)+rec(curr+2)+rec(curr+3);
}

int main()
{
   cin>>start>>endd;
   cout<<rec(start)<<endl;

    return 0;
}
