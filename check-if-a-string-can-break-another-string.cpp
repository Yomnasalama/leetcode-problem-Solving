class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int x = 0;
        int idx = 0;
        for(int i = 0; i < s1.length();i++){
            if(s1[i] > s2[i]){
                x = 1;
                idx = i+1;
                break;
            }
            else if(s1[i] < s2[i]){
                x = 2;
                idx = i + 1;
                break;
            }
                
        }
        for(int i = idx; i < s1.size();i++){
            if(s1[i] == s2[i])
                continue;
            if(x == 1 && s2[i] > s1[i])
                return false;
            if(x == 2 && s1[i] > s2[i])
                return false;
            
        }
        return true;
        
    }
};
