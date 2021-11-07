class Solution {
public:
    void c (int &m, int &d, int k){
        while(k!=0){
            if(k&1){
                m++;
                k-=1;
            }
            else if( k != 0){
                d++;
                k/=2;
            }
        }
        return;
    }
    
    int minOperations(vector<int>& nums) {
        int divide = 0;
        int minus = 0;
        for(int i = 0; i < nums.size();i++){
            int m = 0; int d = 0;
            c(m,d,nums[i]);
            minus+=(m);
            divide = max(divide,d);
        }
        return minus+divide;
    }
};
