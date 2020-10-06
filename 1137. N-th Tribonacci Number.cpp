class Solution {
public:
    int tribonacci(int n) {
        if(n < 2) return n;
        
        int a = 0;
        int b = 1 ;
        int c = 1;
        int d = a+b+c;
        while(n-- > 2)
        {
            d = a+b+c;
            a = b;
            b = c;
            c= d;
        }
        return c;
        
    }
};