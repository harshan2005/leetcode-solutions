class Solution {
    public boolean isPalindrome(int x) {
        int temp=x;
        int sum=0;
        if (x<0) return false;
        while(temp!=0){
            sum=sum*10+(temp%10);
            temp=temp/10;
        }
        return x==sum;
    }
}