//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     for(int i = 0 ;i<s.size();i++)
     {
        int  len = x.size();
        
        if(s[i]==x[0])
        {
            int index = i;
            int cnt =0;
            for(int j = 0;j<len;j++)
            {
               // index = i;
                if(s[index] ==x[j])
                {
                   cnt++;
                   index++;
                }
                if(cnt == len )
                {
                    return i;
                }
            }
            // if(cnt == len )
            // {
            //     return i;
            // }
        }
     }
          return -1;
}