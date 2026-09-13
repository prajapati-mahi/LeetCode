class Solution {
public:
    int secondHighest(string s) {
        int n= s.size();

        vector<int> nums;
        for(int i=0; i<n; i++){
            if(s[i]== '1' || s[i]== '2' || s[i]== '3' || s[i]== '4' || s[i]== '5' || s[i]== '6' || s[i]== '7' || s[i]== '8' || s[i]== '9' || s[i]== '0'){
                int a= (s[i]- '0');
                nums.push_back(a);
            }
        }
        int maxi=-1;
        int secmaxi= -1;
        int k= nums.size();

        for(int i=0; i<k; i++){
            if(nums[i]> maxi){
                secmaxi= maxi;
                maxi= nums[i];
            }
            else if(nums[i]> secmaxi && maxi != nums[i]){
                secmaxi= nums[i];
            }
        }
        return secmaxi;
    }
};