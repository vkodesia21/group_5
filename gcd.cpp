#include "functions.h"

int gcd(int x,int y){
	int gcd;
	 for(int i=1; i <= x && i <= y; ++i)
    {
        // Checks if i is factor of both integers
        if(x%i==0 && y%i==0)
            gcd = i;
    }
    return gcd;
}

int gcd_rec(int x, int y) {
    if (y != 0)
        return gcd_rec(y, x % y);
    else
        return n1;
}