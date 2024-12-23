//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string longest(vector<string> &names) {
        
        int n = names.size();
        int s = names[0].length();
        int s1= 0;
        int index= 0;
        for(int i = 1;i<n;i++)
        {
            s1 = names[i].length();
            if(s1>s)
            {
                s= s1;
                index = i;
            }
        }
        return names[index];
        // code here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> names;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        string str;
        while (ss1 >> str) {
            names.push_back(str);
        }
        Solution obj;
        string res = obj.longest(names);
        cout << res << "\n~\n";
    }
}

// } Driver Code Ends