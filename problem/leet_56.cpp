#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
vector<pair<int, int>> v;
class Solution {
public:
	vector<vector<int>> merge(vector<vector<int>>& intervals) {
		vector<vector<int>> answer;
		vector<int> tmp;
		int len = intervals.size();
		for (int i = 0; i < len; i++) {
			v.push_back({ intervals[i][0], intervals[i][1] });
		}
		sort(v.begin(), v.end());
		int idx = 0;
		tmp.push_back(v[0].first);
		int target = v[0].second;
		for (int i = 0; i < v.size() - 1; i++) {
			if (target >= v[i + 1].first) {
				if (target >= v[i + 1].second)
					continue;
				else
					target = v[i + 1].second;
			}
			else {
				tmp.push_back(target);
				answer.push_back(tmp);
				tmp.clear();
				tmp.push_back(v[i + 1].first);
				target = v[i + 1].second;
			}
		}
		tmp.push_back(target);
		answer.push_back(tmp);
		v.clear();
		tmp.clear();
		return answer;
	}
};

