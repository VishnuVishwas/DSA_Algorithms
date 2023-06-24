// Book allocation Problem : Allocate minimum number of pages ( source : GFG )

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    
    bool possibleSol(int A[], int N, int M, int sol) {
        
        int pageSum = 0;
        int student = 1;
        
        for(int i=0; i<N; i++) {
            if (A[i] > sol) {         //if the number of pages is greater than the expected sol
                return false;
            }
            
            if(A[i]+pageSum > sol) {  
                student++;            // if pages of 1st student are greater than solution
                pageSum = A[i];       // we allocate the extra pages to next student
                
                if(student > M) {     
                    return false;
                }
            }
            
            else {
                pageSum = pageSum + A[i];
            }
        }
        
        return true;
    }
    
    int findPages(int A[], int N, int M) {
        
        if(M>N) return -1;                        // no.of students > no.of Books
        
        int ans = -1;
        int start = 0;
        int end = accumulate(A, A+N, 0);         // STL function to find the sum of array elements
        
        while(start <= end ) {
            int mid = (start+end)/2;
            if (possibleSol(A, N, M, mid) ) {    // assuming that mid is max no.of pages that can be alloted and then checking
                ans = mid;
                end = mid-1;
            }
            
            else {
                start = mid + 1;
            }
        }
        
    return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends