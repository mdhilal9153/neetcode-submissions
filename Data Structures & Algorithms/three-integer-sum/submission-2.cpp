class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        for(int i=0;i<arr.size();i++){
            int j=i+1;
            int k=arr.size()-1;
            while(j<k){
                int sum = arr[i]+arr[j]+arr[k];
                if(sum==0){
                    vector<int> temp;
                    temp.insert(temp.begin(),{arr[i],arr[j],arr[k]});
                    auto it = find(ans.begin(),ans.end(),temp);
                    if(it != ans.end()){
                        j++;
                        k--;
                        continue;
                    }
                    else{
                        ans.insert(ans.end(),{arr[i],arr[j],arr[k]});    
                        j++;
                        k--;
                    }
                    
                }
                else if(sum>0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return ans;
    }
};
