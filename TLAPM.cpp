#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;

typedef vector<int> vi;
#define INF 1000000000
vector <ll> v;
ll arr[10000][10000]={0};
void path_helper(ll p1, ll p2, ll x2, ll y2, ll sum)
{
       sum += arr[p1][p2];
       if((p1==x2)&&(p2==y2))
       {
              v.push_back(sum);
              return;
       }
       if(p1==x2)
       {
              path_helper(p1,p2+1,x2,y2,sum);
       }
       else if(p2==y2)
       {
             path_helper(p1+1,p2,x2,y2,sum); 
       }
       else
       {
        path_helper(p1+1,p2,x2,y2,sum);
        path_helper(p1,p2+1,x2,y2,sum);      
       }
       
       
       
}

ll path(ll x1, ll y1, ll x2, ll y2)
{
       ll sum=0;
       path_helper(x1-1, y1-1, x2-1,y2-1,sum);
       sort(v.begin(),v.end());
      reverse(v.begin(),v.end());
       return v[0];
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
       ll x1,x2,y1,y2;
       cin >> x1 >> y1 >> x2 >> y2;
       ll s = x2>=y2?(x2+x2-1):(y2+x2-1);
       ll cnt=1;
       for(ll j=0;j<s;j++)
       {
              ll i=0;
              arr[i][j]=cnt;
              cnt++;
              ll o=j;
              for(int k=0;k=(j-i);k++)
              {
                     
                     i++;
                     o--;
                     arr[i][o]=cnt;
                     cnt++;
              }
       }
       cout << path(x1,y1,x2,y2);
       
    }
	// your code goes here
	return 0;
}
