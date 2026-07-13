class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        set<int> ss(arr.begin(),arr.end());
        int maxl=0;
        for(auto it:ss){
            int len=1;
            if(ss.find(it-1)==ss.end()){
                int j=it+1;
                while(ss.find(j)!=ss.end()){
                    len++;
                    j++;
                }
                maxl=max(len,maxl);
            }
        }

        return maxl;
    }
};
