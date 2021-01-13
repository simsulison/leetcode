class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		int len = nums.size();
		vector<int> v;
		int find = 0;
		for (int i = 0; i < len - 1; i++) {
			for (int j = i + 1; j < len; j++) {
				if (nums[i] + nums[j] == target) {
					v.push_back(i);
					v.push_back(j);
					find = 1;
					break;
				}
			}
			if (find == 1) {
				break;
			}
		}
		return v;
	}
};