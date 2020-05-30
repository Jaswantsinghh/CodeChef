#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	// your code goes here
	int t,year;
	cin >> t;
	for(int i=0;i<t;i++)
	{
	    cin >> year;
	    if(year==2010||year==2015||year==2016||year==2017||year==2019)
	    {
	        cout << "HOSTED"<<"\n";
	    }
	    else
	    {
	        cout << "NOT HOSTED"<<"\n";
	    }
	}
	return 0;
}
