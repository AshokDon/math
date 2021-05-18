#include <iostream>
using namespace std;
int countdigits(int n)
{
    if(n==0)
    {
        return 0;
    }
    return 1+countdigits(n/10);
}
int main() {
	int n;
	cin>>n;
	cout<<countdigits(n);
	return 0;
}
