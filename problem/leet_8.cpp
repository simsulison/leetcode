class Solution {
public:
    int myAtoi(string s) {
        int len = s.length();
        string tmp ="";
        int sign=1;
        int flag=0;
        for(int i=0; i<len; i++){
            if(s[i] == ' ' && flag != 1)
                continue;
            else if(s[i] == '-' && flag != 1){
                sign =-1;
                flag=1;
            }
            else if(s[i] == '+' && flag != 1){
                sign =1;
                flag=1;
            }
            else if(s[i] >= '0' && s[i] <= '9'){
                flag =1;
                tmp += s[i];
            }
            else break;
        }
        try{
            if(tmp == "")
                return 0;
            else
                return stoi(tmp)*sign;            
        }catch(out_of_range & e){
            if(sign == -1){
                return INT_MIN;
            }
            else
                return INT_MAX;
        }
    }
}; 
