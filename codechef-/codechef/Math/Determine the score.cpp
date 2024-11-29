#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int x,n ;
        cin>> x >> n;
        int points_per_case = x/10;
        cout<< points_per_case*n << endl;
    }

	return 0;
}
