//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> immediateSmaller(vector<int>& arr) {
        //  code here
        for(int i = 0;i<arr.size()-1;i++)
        {
            if(arr[i+1]<arr[i])
            {
                arr[i]=arr[i+1];
            }
            else{
                arr[i] = -1;
            }
        }
        arr[arr.size()-1]=-1;
        return arr;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.immediateSmaller(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends