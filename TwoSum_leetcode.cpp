class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        vector<int>a(2);
        int n=nums.size();
        for(int i=0;i<n;i++){
            int index=find(nums.begin()+i+1,nums.end(),target-nums[i])-nums.begin();
            if(index<n){
                a[0]=i;
                a[1]=index;
                break;
            }
        }
        return a;
    }
};

/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int j;
        for(int i=0;i<nums.size();i++){
            for(j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j] == target){
                    res.push_back(i),res.push_back(j);
                    j=0;
                    break;
                }
            }
            if(j==0) break;
        }
        return res;
    }
};
*/