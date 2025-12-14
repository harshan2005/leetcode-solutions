class Solution {
    public String defangIPaddr(String address) {
        String result ="";
        for(int i=0;i<address.length();i++){
            char character = address.charAt(i);
            if(character=='.'){
                result=result+"[.]";
            }
            else{
                result=result+character;
            }

        } 
        return result;
    }
}