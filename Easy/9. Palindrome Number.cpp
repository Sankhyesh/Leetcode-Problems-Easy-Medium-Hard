

class Solution {
public:
    bool isPalindrome(int x) {
        string xs = to_string(x);
        int s = 0;
        int l = xs.size()-1;
        
        while(s<l){
            if(xs[s] != xs[l]){
                return false;
            }
            s++;
            l--;
        }
        return true;
    }
};

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int r = x;
        long rev = 0;
        
        while(r!=0){
            rev = (rev*10) + (r%10);
            r = r/10;
        }
        
        return x == rev;
    }
};
