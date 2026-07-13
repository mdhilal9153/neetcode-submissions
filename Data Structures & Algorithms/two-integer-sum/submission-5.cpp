class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int,int> mpp;
        for(int i=0;i<arr.size();i++){
            if(mpp.find(target-arr[i])!=mpp.end()){
                auto it=mpp.find(target-arr[i]);
                return {it->second,i};
            }
            mpp[arr[i]]=i;
        }

        return {-1,-1};
    }
};
