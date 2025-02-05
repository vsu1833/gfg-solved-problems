//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    
cout << "~" << "\n";
}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string word1, string word2)
{

        string alt;

        for (int i = 0; i < word1.size() || i < word2.size(); i++) {
            if (i < word1.size()) alt += word1[i];
            if (i < word2.size()) alt += word2[i];
        }

        return alt;
    


}