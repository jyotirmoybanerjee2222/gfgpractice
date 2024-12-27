//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        int n = arr.size();
        sort(arr.begin(),arr.end());
        string s1 = arr[0];
        string s2 = arr[n-1];
        string res = "";
        for(int i = 0;i<s1.length();i++)
        {
            if(s1[i] == s2[i])
            {
              res += s1[i];   
            }
            else{
                break;
            }
        }
        
        return res;
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        string ans = ob.longestCommonPrefix(arr);
        if (ans.empty())
            cout << "\"\"";
        else
            cout << ans;
        cout << endl;
    }
}

// } Driver Code Ends