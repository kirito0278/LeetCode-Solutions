class Solution {
public:
    bool isPalindrome(int x) {
        long rev = 0;
        int temp=x;
        if(x>=0){
            while(temp>0){
                int div = temp%10;
                rev = rev*10 + div;
                temp = temp/10;
            }
            if(rev==x){
                return true;
            }
        }
        return false;
    }
};