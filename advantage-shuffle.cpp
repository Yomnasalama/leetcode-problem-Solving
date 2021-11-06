class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        multiset<int> m (nums1.begin(),nums1.end());
        for(int i = 0; i < nums1.size() ;i++){
            auto it = m.upper_bound(nums2[i]);
            if(it == m.end())
                it = m.begin();
            
            nums1[i] = *it;
            m.erase(it);
        }
        return nums1;
        
    }
};
