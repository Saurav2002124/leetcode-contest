class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.size() == 0)
                    return false;
                char ch = st.top();
                if (ch == '(' && s[i] == ')')
                    st.pop();
                else if (ch == '{' && s[i] == '}')
                    st.pop();
                else if (ch == '[' && s[i] == ']')
                    st.pop();
                else
                    return false;
            }
        }
        return (st.size() == 0);
    }
};