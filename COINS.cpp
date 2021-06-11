#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000
unordered_map<int,ll>mp;
ll solve(ll n)
    {
           if(n==0||n==1) return n;
           if(mp.count(n)) return mp[n];
           ll res = n;
           res = max(res,solve(n/2)+solve(n/3)+solve(n/4));
           return mp[n] = res;
    }
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    
    
    
    while(cin >> t)
    {
       cout << solve(t)<<"\n";
    }
	// your code goes here
	return 0;
}

