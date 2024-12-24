//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int calculateFriendliness(vector<int>& arr) {
        // code here
        int sum = 0;
        for(int i = 0;i<arr.size()-1;i++)
        {
            sum+= abs(arr[i+1]-arr[i]);
        }
        sum+=abs(arr[arr.size()-1]-arr[0]);
        return sum;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character before getline
    while (t--) {
        vector<int> arr;
        string line;

        getline(cin, line);
        stringstream ss(line);
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution solution;
        cout << solution.calculateFriendliness(arr) << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends