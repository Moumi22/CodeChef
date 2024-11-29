#include <iostream>
using namespace std;

int main() {
    int T;
    cin>> T;
    while(T--)
    {
        int x;
        cin>> x;
        if( x >= 7)
        {
            cout<< "HOT";
        }
        else if(x>= 4)
        {
            cout<< "MEDIUM";
        }
        else
        {
            cout<< "MILD";
        }
        cout << "\n";
    }
	return 0;
}

