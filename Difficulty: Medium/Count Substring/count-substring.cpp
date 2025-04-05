//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
   int countSubstring(string s) 
   {
       int cnt = 0;
       int n = s.size();
       for(int i = 0 ; i < s.size() ; i++)
       {
           int hash[3]={0};
           for(int j = i ; j < s.size() ; j++)
           {
               hash[s[j]-'a']=1;
               if(hash[0]+hash[1]+hash[2]==3)
               {
                   cnt=cnt+(n-j);
                   break;
               }
           }
       }
       return cnt;
   }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        cout << obj.countSubstring(s) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends