class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++)
        {
            char ch=s[i];
            if (ch == '{' || ch == '(' || ch == '[')
            {
                st.push(ch);
            }
            else{
                if(st.empty())
                {
                    return false;
                }
            
                if((st.top()=='(' and s[i]==')') or (st.top()=='[' and s[i]==']') or (st.top()=='{' and s[i]=='}'))
                {
                    st.pop();
                    continue;
                }
                else{
                    return false;
                }
                }
        }
        return st.empty()?true:false;
    }
};