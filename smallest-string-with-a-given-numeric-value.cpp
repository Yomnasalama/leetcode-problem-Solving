class Solution {
public:
    string getSmallestString(int n, int k) {
        string l = "zyxwvutsrqponmlkjihgfedcba";
        string s (n,'a');
        int i = 0;
        int j = n - 1;
        while(n){
            if(l[i] - 'a' + 1 <= k && k - (l[i] - 'a' + 1 )>= n - 1){
                s[j] = l[i];
                k -= l[i] - 'a' + 1;
                j--;
                n--;
                if(k < l[i] - 'a' + 1)
                    i++;
            }
            else{
                i++;
            }
        }
        return s;
        
    }
};
