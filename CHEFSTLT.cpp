#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   int t;
   cin >> t;
   for(int i=0;i<t;i++)
   {
   string str;
   string str2;
   cin >> str;
   cin >> str2;
   int n=str.length();
   char arr2[n+1];
   char arr[n+1];
   strcpy(arr,str.c_str());
   strcpy(arr2,str2.c_str());
   int maxx=0,minn=0;
   for(int i=0;i<n;i++)
   {
       if((arr[i]=='?'&&arr2[i]=='?')||(arr[i]=='?'||arr2[i]=='?'))
       {
           maxx=maxx+1;
       }

       else if(arr[i]!=arr2[i])
       {
           minn=minn+1;
           maxx=maxx+1;
       }
   }
    cout << minn << " " << maxx << "\n";
   }
  return 0;
}
