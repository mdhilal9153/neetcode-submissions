class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            int t1=(char)tolower(s[i]);
            int t2=(char)tolower(s[j]);
            
            
            if(!isalnum(t1)){
                i++;
            }
            else if(!isalnum(t2)){
                j--;
            }

            else if(t1!=t2){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};
