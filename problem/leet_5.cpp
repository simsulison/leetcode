class Solution {
public:
    bool dp[1001][1001];
    string longestPalindrome(string s) {
	    int len = s.length();
	    int answer = -1;
	    int start = 0;
	    for (int i = 0; i < len; i++) {
    		dp[i][i] = true;
    	}
    	for (int i = 0; i < len - 1; i++) {
    		if (s[i] == s[i + 1]) {
			dp[i][i + 1] = true;
    		}
    	}
    	for (int j = 2; j < len; j++) {
    		for (int i = 0; i <= j; i++) {
    			if (dp[i][j]) continue;
    			if (dp[i + 1][j - 1] && s[i] == s[j]) {
    				dp[i][j] = true;
    			}
    		}
    	}
    	for (int i = 0; i < len; i++) {
    		for (int j = i; j < len; j++) {
    			if (dp[i][j]) {
    				if (answer < j - i + 1)
    				{
    					answer = j - i + 1;
    					start = i;
    				}
    			}
    	    }
	    }
	    return s.substr(start, answer);
    }
};
 
