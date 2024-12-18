//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        int hash[n+1] = {0};
        vector<int>ans;
        
        for(int i = 0;i<n;i++)
        {
            hash[arr[i]]++;
        }
        int rep=-1;
        int mis = -1;
        for(int i = 1; i<=n;i++)
        {
            if(hash[i] == 2)
            {
                rep=i;
            }
            if(hash[i] == 0)
            {
                mis=i;
            }
        }
        ans.push_back(rep);
        ans.push_back(mis);
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends