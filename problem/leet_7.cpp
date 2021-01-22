class Solution {
public:
    int reverse(int x) {
        string tmp="";
        int res;
        if(x<0) tmp += '-';
        tmp += to_string(x);
        if(x<0)
            std::reverse(tmp.begin()+1, tmp.end());
        else
            std::reverse(tmp.begin(), tmp.end());
        try{
            res = stoi(tmp);
        }
        catch(out_of_range & e){
            return 0;
        }
        return res;
    }
}; 
