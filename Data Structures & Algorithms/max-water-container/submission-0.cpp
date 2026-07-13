class Solution {
public:
    int maxArea(vector<int>& arr) {
        int i=0;
        int j=arr.size()-1;
        int max=0;
        while(i<j){
            int area=(j-i)*min(arr[j],arr[i]);
            if(area>max){
                max=area;
                if(arr[i]<=arr[j]){
                    i++;
                }
                else if(arr[j]<arr[i]){
                    j--;
                }
            }
            else if(arr[i]<=arr[j]){
                i++;
            }
            else if(arr[j]<arr[i]){
                j--;
            }
        }

        return max;
    }
};
