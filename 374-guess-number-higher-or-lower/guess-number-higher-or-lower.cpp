/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
       int low=1,high=n;
       while(low<=high){
        int index=low+(high-low)/2;
        int pick=guess(index);

        if(pick==0){
            return index;
        }
        else if(pick<0){
            high=index-1;
        }
        else{
            low=index+1;
        }
       }
       return -1; 
    }
};