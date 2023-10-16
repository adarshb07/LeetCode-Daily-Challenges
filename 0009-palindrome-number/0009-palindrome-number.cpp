class Solution {
public:

    int reverseNum(int x){
        long int rev = 0;
        while(x!=0){
            int rem = x % 10;
            rev = (rev * 10) + rem;
            x /= 10;
        }
        return rev;
    }

    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        // Reversing the number and storing in the temp variable;
        int temp = reverseNum(x);
        if(x ==  temp){
            return true;
        }
        return false;
    }
};