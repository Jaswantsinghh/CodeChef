#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    while(t--)
    {
       string str;
       int sum=0;
       cin >> str;
       for(int i=0;i<str.size();i++)
       {
           if(str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'||str[i]=='0')
           {
               sum = sum+((int)(str[i])-48);
           }
           
       }
       cout << sum <<"\n";
    }
	// your code goes here
	return 0;
}
