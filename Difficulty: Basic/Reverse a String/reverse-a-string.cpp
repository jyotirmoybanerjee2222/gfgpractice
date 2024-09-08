//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    string reverseWord(string str)
    {
        int len = str.length();
        string s;  // Initialize an empty string to store the reversed string
        for(int i = 0; i <= len-1; i++)
        {
            s += str[len-1-i];  // Append each character from the end of `str` to `s`
        }
        return s;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends