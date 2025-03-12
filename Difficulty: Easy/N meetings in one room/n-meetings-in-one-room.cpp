//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code her
        vector<pair<int, int>> meetings;
    for(int i = 0; i < start.size(); i++) {
        meetings.push_back({end[i], start[i]});
    }
    sort(meetings.begin(),meetings.end());
    int count = 0;
    int last_end_time = -1;
    
    for(auto meeting: meetings) {
        int curr_start= meeting.second;
        int curr_end = meeting.first;
        
        if(curr_start>last_end_time) {
            count++;
            last_end_time = curr_end;
        }
    }
    
    return count;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> start;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            start.push_back(num);
        }

        vector<int> end;
        getline(cin, input);
        stringstream s22(input);
        while (s22 >> num) {
            end.push_back(num);
        }

        Solution ob;
        int ans = ob.maxMeetings(start, end);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends