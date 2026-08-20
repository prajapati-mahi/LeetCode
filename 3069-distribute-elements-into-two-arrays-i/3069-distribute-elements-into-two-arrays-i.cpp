class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n= nums.size();

        vector<int> arr1;
        vector<int> arr2;

        int recent1=0;
        int recent2=0;
        for(int i=0; i<n; i++){
            if(i==0){
                arr1.push_back(nums[i]);
                recent1= nums[i];
            }
            else if(i==1){
                arr2.push_back(nums[i]);
                recent2= nums[i];
            }
            else if(recent1 > recent2){
                arr1.push_back(nums[i]);
                recent1= nums[i];
            }
            else if(recent2 > recent1){
                arr2.push_back(nums[i]);
                recent2= nums[i];
            }
        }
        int k= arr2.size();
        for(int i=0; i<k; i++){
            arr1.push_back(arr2[i]);
        }
        return arr1;
    }
};