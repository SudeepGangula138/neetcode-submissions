class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string c:tokens){
            if(c!="+" && c!="-" && c!="*" && c!="/"){
                st.push(stoi(c));
            }
            else{
                if(c=="+"){
                    int k=st.top();
                    st.pop();
                    int v=st.top();
                    st.pop();
                    st.push(k+v);
                }
                if(c=="-"){
                    int k=st.top();
                    st.pop();
                    int v=st.top();
                    st.pop();
                    st.push(v-k);
                }
                if(c=="*"){
                    int k=st.top();
                    st.pop();
                    int v=st.top();
                    st.pop();
                    st.push(k*v);
                }
                if(c=="/"){
                    int k=st.top();
                    st.pop();
                    int v=st.top();
                    st.pop();
                    st.push(v/k);
                }
            }
        }
        return st.top();
    }
};
