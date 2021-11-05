class Solution {
public:
    int minimumDeletions(string s) {
        vector<int> a(s.size(),0);
        vector<int> b(s.size(),0);
    a[0] = (s[0] == 'a');
    for(int i = 1; i < s.size(); i++){
        a[i] = a[i-1] + (s[i] == 'a');
    }
    b[s.size() - 1] = ((s[s.size() - 1]) == 'b');
    for(int i = s.size() - 2; i >= 0; i--){
        b[i] = b[i+1] + (s[i] == 'b');
    }
    int m = 0;
    int j = 0;
    for(int i = 0; i < s.size(); i++){
        m = max(m, a[i] + b[i]);
        
    }
        
    return s.size() - m;
        
    }
    
    
};
