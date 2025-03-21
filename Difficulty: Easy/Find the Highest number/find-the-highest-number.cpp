//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int findPeakElement(vector<int>& a)
    {
    int n = a.size();
    
    if(n == 1) return a[0];
    
    if(a[0] > a[1]) return a[0];
    if(a[n-1] > a[n-2]) return a[n-1];
    
    int left = 0;
    int right = n-1;
    
    while(left <= right) {
        int mid = left + (right - left)/2;
        
        if(a[mid] > a[mid-1] && a[mid] > a[mid+1]) {
            return a[mid];
        }
        else if(a[mid] > a[mid-1]) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}
};




//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    
cout << "~" << "\n";
}
	return 0;
}


// } Driver Code Ends