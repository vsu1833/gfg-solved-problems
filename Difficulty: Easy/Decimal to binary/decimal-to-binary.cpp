class Solution {
  public:
    string decToBinary(int n) {
        // code here
        int num = 0;
        string binary="";
        while(n>0)
        {
            num = n % 2;
            if(num==1)
            binary+='1';
            else
            binary+='0';
            n=n/2;
        }
        reverse(binary.begin(),binary.end());
        return binary;
        
    }
};