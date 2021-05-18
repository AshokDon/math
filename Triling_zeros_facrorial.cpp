/*find the trailling zeros for a factorial of a number 
with the help of prime factors 2 and 5 we can know the count of trailling zeros since 
2 and 5 lead to a zero possible number 2*5=10 .
now count the pairs that can be formed in prime factor representation of factorial n.
example 5!=120 prime factors 2*2*2*3*5 we can form one pair (2,5) since we have only one
5, if we absorbe deeply the number of 2's will always less the number of 5's so count 
no of 5's in factorial of n prime representation . 
*/
#include<bits/stdc++.h>
using namespace std;
int traillingzero(int n)
{
    int res=0;
    for(int i=5;i<=n;i*=5)
    {
        res=res+n/i;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<traillingzero(n);
}