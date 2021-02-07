class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.size()%2 == 1)
            return false;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i]== '{'){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    char tmp = st.top();
                    if((tmp == '(' && s[i] == ')') || (tmp=='[' && s[i] == ']') ||(tmp=='{' && s[i] == '}'))    {
                        st.pop();   
                    }
                    else{
                        return false;
                    }        
                }
                else{
                    return false;
                }
            }
        }
        if(st.size() == 0){
            return true;
        }
        else 
            return false;
    }
}; 

