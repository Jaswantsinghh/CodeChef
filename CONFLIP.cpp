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
       ll G;
       cin >> G;
       while(G--)
       {
              ll I,N,Q;
              cin >> I >> N >> Q;
              ll H,T;
              if(I==1)
              {
                     if(N%2==0)
                     {
                            H = N/2;
                            T = N/2;
                     }
                     else
                     {
                            H = N/2;
                            T = (N/2)+1;
                     }
              }
              else
              {
                    if(N%2==0)
                     {
                            H = N/2;
                            T = N/2;
                     }
                     else
                     {
                            T = N/2;
                            H = (N/2)+1;
                     } 
              }
              if(Q==1) cout << H <<"\n";
              else cout << T <<"\n";
       }
       
    }
	// your code goes here
	return 0;
}

