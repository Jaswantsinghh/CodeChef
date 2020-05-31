#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t,n,t1,t2;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> n;
        for(int j=0;j<n;j++)
        {
         long long int ans=0;
        while(n!=0)
        { t1=sqrt(n);
        t1=t1*t1;
        n=n-t1;
        ans++;
        }
       cout<<ans<<"\n";

    }
	}// your code goes here
	return 0;

}
