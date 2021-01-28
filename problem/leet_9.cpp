class Solution {
public:
    bool isPalindrome(int x) {
        string tmp1;
        string tmp2;
        tmp1 = to_string(x);
        tmp2= tmp1;
        std::reverse(tmp2.begin(), tmp2.end());
        if(!tmp1.compare(tmp2))
            return true;
        return false;
    }
}; 
