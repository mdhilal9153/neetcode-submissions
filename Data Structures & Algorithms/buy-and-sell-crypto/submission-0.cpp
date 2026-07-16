class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int prof=0;
        int curr=arr[0];
        for(int i=1;i<arr.size();i++){
            
            if(curr > arr[i]){
                curr=arr[i];
            }
            else{
                int currP= arr[i]-curr;
                prof = max(prof,currP);
            }
        }

        return prof;
    }
};
