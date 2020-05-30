#include <iostream>
using namespace std;

int main() {
    long long n1,n2;
    cin >> n1;
    cin >> n2;
    if(n1>n2)
    {
        n1=n1-n2;
    }
    else
    {
        n1=n1+n2;
    }
    cout << n1;
	// your code goes here
	return 0;
}
