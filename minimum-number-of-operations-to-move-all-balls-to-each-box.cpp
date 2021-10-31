class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> v;
        int k = 0;
        for(int i = 0; i < boxes.length(); i++){
            for(int j = 0; j < boxes.length(); j++){
                if(boxes[j] == '1')
                    k += (abs(j - i));
            }
            v.push_back(k);
            k= 0;
        }
        return v;
        
    }
};
