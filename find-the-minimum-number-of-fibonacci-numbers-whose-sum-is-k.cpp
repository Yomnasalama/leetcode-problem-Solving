class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<int> v;
        int a = 1;
        int b = 1;
        v.push_back(a);
        v.push_back(b);
        while(v.back() < k){
            v.push_back(a+b);
            a = b;
            b = v.back();
        }
        int ans = 0;
        int n = v.size();
        while(k){
            if(binary_search(v.begin(),v.end(),k)){
                ans++;
                break;
                
            }
            else{
                int idx = lower_bound(v.begin(),v.end(),k) - v.begin();
                k -= v[idx - 1];
                ans++;
            }
        }
        return ans;
        
    }
};
