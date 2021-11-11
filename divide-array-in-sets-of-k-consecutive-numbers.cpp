class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size() % k != 0 || nums.size() == k)
            return false;
        multiset<int> ms;
        for(int i = 0; i < nums.size();i++){
            ms.insert(nums[i]);
        }
        
        while(!ms.empty()){
            auto a = *ms.begin();
            
            for(int i = a; i < a+k; i++){
                auto itr = ms.find(i);
                if(itr == ms.end())
                    return 0;
                ms.erase(itr);
            }
        }
        return true;
    }
};
