class Solution {
public:
    string countAndSay(int n) {
        string result="1";
        for(int i=2;i<=n;i++){
            string temp="";
            int count=1;
            char currentChar=result[0];
            for(int j=1;j<result.length();j++){
                if(result[j]==currentChar){
                    count++;
                } else {
                    temp+=to_string(count);
                    temp+=currentChar;
                    currentChar=result[j];
                    count=1;
                }
            }
            temp+=to_string(count);
            temp+=currentChar;
            result=temp;
        }
        return result;
    }
};
