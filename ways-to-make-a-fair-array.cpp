class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int e = 0 ;
        int o = 0;
        vector<int> pe (nums.size(),0);
        vector<int> po (nums.size(),0);
        vector<int> se (nums.size(),0);
        vector<int> so (nums.size(),0);
        for(int i = 0; i < nums.size();i++){
            if(i%2 == 0)
                e+=nums[i];
            else
                o+=nums[i];
        }
        int e2 = e;
        int o2 = o;
        for(int i = 0; i < nums.size();i++){
            if(i%2 == 0){
                e-= nums[i];
                pe[i] = e;
                po[i] = o;
            }
            else{
                o-= nums[i];  
                po[i] = o;
                pe[i] = e;
           }
        }
        for(int i = nums.size() - 1; i >= 0;i--){
            if(i%2 == 0){
                e2 -= nums[i];
                se[i] = e2;
                so[i] = o2;
            }
            else
                o2 -= nums[i];
                se[i] = e2;
                so[i] = o2;
        }
        int  k = 0;
        for(int i = 0; i < nums.size();i++){
            if(se[i] + po[i] == pe[i] + so[i])
                k++;
        }
        return k;
    }
};
