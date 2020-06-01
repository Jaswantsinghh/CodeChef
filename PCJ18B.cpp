#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i,sum;
    cin >> t;
    while(t--)
	{
		sum=0;
		cin >> n;
		for(i=n;i>=1;i=i-2)
		{
		sum+=(i*i);
		
		}
		cout << sum <<"\n";
	}
	// your code goes here
	return 0;
}
