//iterative solution
#include<bits/stdc++.h>
using namespace std;
int n;
int fact(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    return ans;
}
//Recursive solution
int factrec(int i)
{
    if(i>=n)
    {
        return n;
    }
    return i*factrec(i+1);
}
int main()
{
    
    cin>>n;
    cout<<fact(n);
    cout<<factrec(1);
    return 0;
}