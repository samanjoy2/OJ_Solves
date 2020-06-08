#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 1 ; i<=n; i++) {
        bool ab = true;
        long long b;
        cin >> b;
        for(long long j = 2; j*j<= b; j++ ) {
            if(b%j==0) {
                ab=false;
            }
        }
        if(ab) cout << "Prime" << endl;
        else cout << "Not Prime" << endl;
    }

    return 0;
}
