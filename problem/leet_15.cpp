class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ret;
        if(nums.size() <3){
            return ret;
        }
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            int tmp = nums[i];
            if(i>0 && tmp == nums[i-1]) continue;
            int ss = i+1;
            int ee = nums.size()-1;
            while(ss < ee){
                int res = tmp + nums[ss] + nums[ee];
                if(res > 0){
                    ee--;
                }
                else if(res < 0){
                    ss++;
                }
                else{
                    ret.push_back({tmp, nums[ss], nums[ee]});
                    ss++;
                    while(nums[ss-1] == nums[ss] && ss<ee){
                        ss++;
                    }
                }
            }
        }
        return ret;
    }
}; 
