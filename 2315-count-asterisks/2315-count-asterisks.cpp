class Solution {
public:
    int countAsterisks(string s) {
        long long int ans =0;
          long long int ex =0;
        

        for(int i=0;i<s.size();i++){
            if(s[i]=='|'){
                ex++;
            }
            if(s[i]=='*' && ex%2==0){
                ans++;
            }
        }
        return ans;
    }
};