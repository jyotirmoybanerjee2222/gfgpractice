//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isParenthesisBalanced(string& s) {
        // code here
        stack<char> st;
        for(int i = 0;i<s.length();i++)
        {
            if((s[i] == '{') || (s[i] == '(') || (s[i] == '[' ))
            {
                st.push(s[i]);
            }
            else if(st.empty())
            {
                return false;
            }
            else if((st.top() == '{' && s[i] != '}') || (st.top() == '[' && s[i] != ']') || (st.top() == '(' && s[i] != ')'))
            {
                return false;
            }
            else{
                st.pop();
            }
        }
        
        if(st.empty())
        {
            return true;
        }
        else{
            return false;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isParenthesisBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends