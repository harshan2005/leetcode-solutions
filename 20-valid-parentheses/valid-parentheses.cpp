class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char c:s){
            if(c=='('||c=='['||c=='{'){
                st.push(c);
            }
            else{
                if(st.empty()){
                    cout<<"false"<<endl;
                    return 0;
                }
                char top=st.top();
                if(c==')'&&top!='('||c=='}'&&top!='{'||c==']'&&top!='['){
                    cout<<"false"<<endl;
                    return 0;
                }
                st.pop();
            }
        }
        return st.empty(); 
    }
};