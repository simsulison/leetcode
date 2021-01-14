#include <map>
#include <algorithm>
map<char, int> m;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        /*
        int len = s.size();
        int maxv=0;
        for(int i=0; i<len; i++){
            int cnt=1;
            m[s[i]]++;
            for(int j=i+1; j<len; j++){
                if(m[s[j]] != 0) break;
                else{
                    m[s[j]]++;
                    cnt++;
                    if(maxv <= cnt){
                        maxv = cnt;
                    }
                }
            }
            if(maxv <= cnt){
                maxv = cnt;
            }
            m.clear();
        }
        return maxv;*/
        
        int left= 0;
        int right=0;
        int maxv=0;
        while(right < s.size()){
            char ch = s[right];
            m[ch]++;
            while(m[ch] > 1){
                char tmp = s[left];
                m[tmp]--;
                left++;
            }
            if(maxv <= right - left + 1){
                maxv = right-left+1;
            }
            right++;
        }
        m.clear();
        return maxv;
    }
};

