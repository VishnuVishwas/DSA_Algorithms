// Find qutionet using binary search
// given dividend and divisor

#include <iostream>
#include <vector>
using namespace std;

int findQuoitent (int dividend, int divisor) {
    int start = 0;
    int end = dividend;
    int mid = start + (end-start)/2;
    int ans;

    while(start <= end) {
        if (mid*divisor == dividend) {
            return mid;
        }

        else if (mid*divisor < dividend) {
            ans = mid;
            start = mid+1;
        }

        else if (mid*divisor > dividend) {
            end = mid-1;
        }

    mid = start + (end-start)/2;
    }

    return ans;
}

int main() {
    int dividend = 22;
    int divisor = 7;

    int quotient = findQuoitent(dividend, divisor);
    cout << "Quotient is : " << quotient << endl;
    
    double finalAns = quotient;
    double step = 0.1;
    
    for(int i=0; i<3; i++) {
        for(double j=finalAns; j*divisor <= dividend; j += step) {
            finalAns = j;
        } 
        step = step/10;
    }
    
    cout << "Precise ans is : " << finalAns << endl;
        
}
