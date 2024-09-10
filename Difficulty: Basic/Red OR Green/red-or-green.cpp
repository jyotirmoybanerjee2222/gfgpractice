//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
       int RedOrGreen(int N,string S) {
           //code here
           int G=0,R= 0;
           for(int i = 0;i < N;i++)
           {
               if(S[i] == 'G')
               {
                   G++;
               }
               else if(S[i] == 'R')
               {
                   R++;
               }
           }
           if(G>=R)
           {
               return R;
           }
           else if(R>G)
           {
               return G;
           }
           else{
               return 0;
           }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        string S;
        cin >> S;
        Solution ob;
        cout << ob.RedOrGreen(N,S) << endl;
    }
    return 0;
}
// } Driver Code Ends