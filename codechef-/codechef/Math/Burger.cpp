#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int burger = min(a,b);
        cout<<burger<<endl;
    }
	return 0;
}

