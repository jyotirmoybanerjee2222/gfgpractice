//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int binary_to_decimal(string str) {
        // Code here.
        int len = str.length();
        int num = 0;
        int p2 = 1;
        
        for(int i = len-1 ;i>= 0;i--)
        {
            if(str[i]=='1')
            {
               num = num+p2; 
            }
            p2 = p2*2;
        }
        return num;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binary_to_decimal(str);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends