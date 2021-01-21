class Solution {
public:
    string convert(string s, int numRows) {
        string tmp;
        int alloc = (numRows < s.size()) ? numRows : s.size();
        vector<string> v(alloc);
        int len = s.length();
	    int pos = 0;
	    int row_pos = 0;
	    int flag = 1;
        if(numRows == 1){
            return s;
        }
        for (int i = 0; i < len; i++) {
    		if (flag == 1) {
	    		v[row_pos] += s[i];
		    	row_pos++;
			    if (row_pos == numRows) {
				    flag *= -1;
				    row_pos -= 2;
			    }
		    }
		    else if (flag == -1) {
			    v[row_pos] += s[i];
			    row_pos--;
			    if (row_pos < 0) {
    				flag *= -1;
    				row_pos += 2;
    			}
	    	}
	    }
	    for(string row : v) tmp += row;
    	return tmp;
        /*
        bool flag = false;
        for(char c : s){
            v[row_pos] += c;
            if(row_pos == 0 || row_pos == numRows-1) flag = !flag;
            row_pos += flag ? 1 : -1;
        }
        */
    }
}; 
