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
       ll n,m,k;
       cin >> n>> m>> k;
       ll id;
       ll cnt[n+m+1];
       memset(cnt,0,sizeof(cnt));
       for(ll i=1;i<=k;++i)
       {
              cin >> id;
              cnt[id]++;
       }
       vector<int> ans;
       for(ll i=1;i<=n;i++)
       {
              if(cnt[i]>1)
              {
                     ans.push_back(i);
              }
       }
       cout << ans.size();
       for(ll i=0;i<ans.size();i++)
       {
                     cout<<" "<<ans[i];
       }
       cout <<"\n";
       
    }
	// your code goes here
	return 0;
}
