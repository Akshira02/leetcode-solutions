// Last updated: 3/27/2025, 9:45:22 AM

class Solution {
public:
    bool isPalindrome(int x) {
        //figure out how many digits
        string num = to_string(x);
       int r=0; int c=num.length()-1;
       while(r<num.length()-1 && c>=0)
       {
            if(num[r]!=num[c])
            {return false;}
            r++;
            c--;
       }
        return true;
    }
   
};