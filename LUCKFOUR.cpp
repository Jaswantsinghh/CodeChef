#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        long long num,four,countt;
        cin >> num;
       while(num>0)
       {
         four=num%10;
         if(four==4)
         {
             countt=countt+1;
         }
         num=(num-four)/10;
       }
       cout << countt<<"\n";
       num=0;
       four=0;
       countt=0;
       
    }
	// your code goes here
	return 0;
}
