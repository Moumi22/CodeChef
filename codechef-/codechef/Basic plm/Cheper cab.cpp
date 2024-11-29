#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x>y)
        {
           cout<<"Second"<<endl;
        }
        else if(y>x)
        {
            cout<<"First"<<endl;
        }
        else
        {
            cout<<"Any"<<endl;
        }
    }
	// your code goes here
	return 0;
}

