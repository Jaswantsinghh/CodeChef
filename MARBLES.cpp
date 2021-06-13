#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000

ll factorial(ll n,ll r)
{
       ll ans=1;
       for(int i=0;i<r;i++)
	{
		
		ans*=(n-i);
		ans/=(i+1);
	 } 
       return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
       ll n,r,ans;
       cin >> n >> r;
       n--;
       r--;
       if(r>n/2) r=n-r;
       ans = factorial(n,r);
       cout << ans <<"\n";
    }
	// your code goes here
	return 0;
}

