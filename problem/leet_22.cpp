
class Solution {
public:
    int check(string s){
        stack<char> st;
        for(int i=0; i<s.size(); i++){
            if(s[i] =='('){
                st.push(s[i]);
            }else{
                if(!st.empty()){
                    char top = st.top();
                    if(top != '(') return 0;
                    else st.pop();
                }
                else
                    return 0;
            }
        }
        if(st.empty()){
            return 1;
        }
        else
            return 0;
    }
    vector<string> generateParenthesis(int n) {
        vector<int> pick;
        vector<string> ans;
        for(int i=0; i<n; i++){
            pick.push_back(0);
        }
        for(int i=0; i<n; i++){
            pick.push_back(1);
        }
        do{
            string tmp;
            for(int i=0; i<pick.size(); i++){
                if(pick[i] == 0){
                    tmp+="(";
                }
                else{
                    tmp+=")";
                }
            }
            if(check(tmp)){
                ans.push_back(tmp);
            }
        }while(next_permutation(pick.begin(), pick.end()));
        return ans;
    }
};

