// User function template for C++
class Solution {
  public:
  void RecArray(int i,vector<int> &arr)
  {
      if(i==arr.size())return ;
      cout<<arr[i]<<" ";
      RecArray(i+1,arr);
  }
    // Just print the space seperated array elements
    void printArray(vector<int> &arr) {
        // code here
        int i = 0;
        RecArray(i,arr);
        
    }
};