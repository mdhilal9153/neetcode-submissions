class Solution {
public:
    bool hasDuplicate(vector<int>& arr) {
        unordered_map<int,int> mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }

        for(auto it:mpp){
            if(it.second>1){
                return true;
            }
        }
        return false;
    }
};