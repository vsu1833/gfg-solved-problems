//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std; 

// } Driver Code Ends


        // code here
        class Solution {
public:
    bool isSubSequence(string s, string t) {
        if (s.empty()) return true; 
        int pointer = 0; 
        for (int i = 0; i < t.size(); i++) {
            if (t[i] == s[pointer]) {
                pointer++;
                if (pointer == s.size()) {
                    return true; 
            }
        }
        }
        
        return false;
    }
};




//{ Driver Code Starts.
int main() 
{ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;  
        Solution ob;
        if(ob.isSubSequence(A,B))
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    
cout << "~" << "\n";
}
    return 0; 
} 

// } Driver Code Ends