class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n= nums.size();

        vector<int> sorted= nums;
        sort(sorted.begin(), sorted.end());
        if(n==1){
            return 1;
        }
        if(n==2 && nums[0] != nums[1]){
            return 2;
        }

        int mini= sorted[0];
        int maxi= sorted[n-1];

        int front=0;
        int frontcount=-1;
        int back=n-1;
        int backcount=-1;
        int count=0;

        int loc1=0;
        int loc2=0;
        for(int i=0; i<n; i++){
            if(nums[i]== mini){
                loc1= i;
            }
            else if(nums[i]== maxi){
                loc2= i;
            }
        }

        int fromFront = max(loc1 + 1, loc2 + 1);
        int fromBack = max(n - loc1, n - loc2);
        int fromBoth = min(loc1 + 1, n - loc1) + min(loc2 + 1, n - loc2);
        
        return min({fromFront, fromBack, fromBoth});
        // while(front <back && count<2){
        //     if(mini== nums[front]){
        //         if(frontcount==-1){
        //             frontcount= min(front+1, n-front);
        //             count++;
        //             front++;
        //         }
        //         else{
        //             backcount= min(back, n-back);
        //             count++;
        //             return min({backcount+frontcount, max(frontcount, min(back+1, n-back)), max(backcount, min(front+1, n-front))});
        //         }
        //     }
        //     else if(mini== nums[back]){
        //         if(backcount==-1){
        //             backcount= min(back, n-back);
        //             count++;
        //             back--;
        //         }
        //         else{
        //             frontcount= min(front+1, n-front);
        //             count++;
        //             return min({backcount+frontcount, max(frontcount, min(back+1, n-back)), max(backcount, min(front+1, n-front))});
        //         }
        //     }
        //     else if(maxi== nums[front]){
        //         if(frontcount==-1){
        //             frontcount= min(front+1, n-front);
        //             count++;
        //             front++;
        //         }
        //         else{
        //             backcount= min(back, n-back);
        //             count++;
        //             return min({backcount+frontcount, max(frontcount, min(back+1, n-back)), max(backcount, min(front+1, n-front))});
        //         }
        //     }
        //     else if(maxi== nums[back]){
        //         if(backcount==-1){
        //             backcount= min(back, n-back);
        //             count++;
        //             back--;
        //         }
        //         else{
        //             frontcount= min(front+1, n-front);
        //             count++;
        //             return min({backcount+frontcount, max(frontcount, min(back+1, n-back)), max(backcount, min(front+1, n-front))});
        //         }
        //     }
        //     else{
        //         front++;
        //         back--;
        //     }
        // }
        // return backcount+frontcount;
    }
};