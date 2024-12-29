//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n) {
        // code here
        if(n <= 1)
        {
            return n; 
        }
        
        int x = 0,y=1;
        int z;
        for(int i = 2;i<=n;i++)
        {
            z = x+y;
            x=y;
            y=z;
        }
        
        return z;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends