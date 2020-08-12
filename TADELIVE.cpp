#include <bits/stdc++.h>
using namespace std;
pair<int, int> arr[100002];
bool comp(pair<int,int>first,pair<int,int>second)
{
        int firstD=abs(first.first-first.second);
        int secondD=abs(second.first-second.second);
        return firstD>secondD;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,x,y;
    cin >> n;
    cin >> x;
    cin >> y;
    long long a[n],b[n],d[n];
    for(long long i=0;i<n;i++)
    {
            cin >> arr[i].first;
    }
    for(long long i=0;i<n;i++)
    {
            cin >> arr[i].second;
    }
    sort(arr,arr+n,comp);
    long long i=0,count=0,an=0,bn=0,sum=0;
    for(int i=0;i<n;i++)
    {
            if(arr[i].first>arr[i].second)
            {
                    if(an<x)
                    {
                            sum += arr[i].first;
                            an++;
                    }
                    else
                    {
                            sum += arr[i].second;
                            bn++;
                    }
            }
            else
            {
                    if(bn<y)
                    {
                    sum += arr[i].second;
                    bn++;
                    }
                    else
                    {
                            sum += arr[i].first;
                            an++;
                    }
            }
    }
    cout << sum;
	// your code goes here
	return 0;
}
