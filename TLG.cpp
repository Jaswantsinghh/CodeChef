#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    int maxx=0,maxp=1,p1=0,p2=0;
    cin >> t;
    
    while(t--)
    {
        int a1,a2;
        cin >> a1;
        
        cin >> a2;
        p1 += a1;
        p2 += a2;
        if(a1>a2){
			if((p1-p2)>maxx){
				maxx=p1-p2;
				maxp=1;
			}
		}else{
			if((p2-p1)>maxx){
				maxx=p2-p1;
				maxp=2;
			}			
		}
        
       
    }
    cout << maxp <<" "<< maxx<<"\n";
	// your code goes here
	return 0;
}
