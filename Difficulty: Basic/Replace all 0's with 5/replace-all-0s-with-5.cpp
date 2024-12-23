//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*you are required to complete this method*/
class Solution {
  public:
    int convertFive(int n) {
        // Your code here
        int temp = n,mod;
        int i = 1;
        if(n == 0)
        {
            return 5;
        }
        while(n>0)
        {
            mod = n%10;
            if(mod == 0)
            {
                mod =5;
                temp = temp+i*mod;
            }
            n = n/10;
            //temp = temp+i*mod;
            i = i*10;
            mod = 0;
        }
        return temp;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.convertFive(n) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends