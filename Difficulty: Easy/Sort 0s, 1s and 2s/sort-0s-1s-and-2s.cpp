//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int n = arr.size();
        int x=0,y=0,z=0;
        for(int i = 0;i<n;i++)
        {
          if(arr[i]==0)
          {
             x++; 
          }
          else if(arr[i]==1)
          {
             y++; 
          }
          else if(arr[i]==2)
          {
             z++; 
          }
        }
        for(int i=0;i<n;i++)
        {
            if(i<x)
            {
                arr[i]=0;
            }
            else if(i<x+y)
            {
                arr[i]=1;
            }
            else if(i<x+y+z)
            {
                arr[i]=2;
            }
        }
        
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends