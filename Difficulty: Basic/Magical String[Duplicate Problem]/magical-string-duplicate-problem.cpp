//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string magicalString(string s){
        // code here 
        int len = s.length();
        for(int i = 0; i<len;i++)
        {
            int ch = s[i]-'a';
            int revch = 25 -ch;
            s[i] = 'a'+revch;
        }
        return s;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.magicalString(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends