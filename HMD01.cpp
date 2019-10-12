#include<bits/stdc++.h>
#define limit 400005
using namespace std;
long long stackrow[limit]={9999999999};
long long countt=0;
long long res=0;
long long sizex=0;
void push_and_pop(long long v)
{
    sizex=0;
    if (countt==0)
    {
        countt++;
        stackrow[countt]=v;
    }
    else
    {
        while ((v>=stackrow[countt])&&(countt>0)) 
            {
                res++;
                if (v==stackrow[countt]) sizex++;
                countt--;
            }
        if (countt!=0) res++;        
        countt=countt+sizex+1;   
        stackrow[countt]=v;
    }
}
int main()
{
    long long n;
    cin>>n;
   // int a[limit];
   stackrow[0]=0;
    long long x;
  //  res=n-1;
    for (int i=0;i<=n-1;i++) 
    {
        cin>>x
        
        push_and_pop(x);
    }
    cout<<res<<endl;
    return 0;
}
