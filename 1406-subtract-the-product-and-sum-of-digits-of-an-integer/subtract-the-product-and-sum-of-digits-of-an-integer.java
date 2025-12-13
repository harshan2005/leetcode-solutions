class Solution {
    public int subtractProductAndSum(int n) {
    int multi=1, sum=0 ;
        while(n!=0){
            int temp =n%10;
            multi = multi*temp;
            sum = sum+temp;
            n=n/10;
        } 
        int count=multi-sum;
        return count;   
    }
}