//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        // Your code here
        int h1[26] = {0};
        int h2[26] = {0};
        for(int i = 0;i<s1.length();i++)
        {
            h1[s1[i] - 'a']++;  
        }
        for(int i = 0;i<s2.length();i++)
        {
            h2[s2[i] - 'a']++;  
        }
        int flag = 0;
        int i = 0;
        int j = 0;
        while(i<s1.length() || j<s2.length())
        {
            if(j>i && i>j)
            {
                return false;
            }
            if(h1[s1[i] - 'a'] != h2[s1[i] - 'a'])
            {
                return false;
            }
            if(h1[s2[j] - 'a'] != h2[s2[j] - 'a'])
            {
                return false;
            }
            i++;
            j++;
            
        }
        
        return true;
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;

    cin >> t;

    while (t--) {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.areAnagrams(c, d))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends