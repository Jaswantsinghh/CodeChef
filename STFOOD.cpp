#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
       ll n;
       cin >> n;
       ll s[n],p[n],v[n],ans[n];
       for(int i=0;i<n;++i)
       {
              cin >> s[i] >> p[i] >> v[i];
              ans[i] = (p[i]/(s[i]+1))*v[i];
       }
       sort(ans,ans+n);
       cout << ans[n-1] <<"\n";
    }
	// your code goes here
	return 0;
}

