class Solution {
    public int findComplement(int num) {
      int val =0;
      int temp=num;
      while(temp!=0){
        val=(val<<1)|1;
        temp>>=1;
      } 
      return num^val; 
    }
}