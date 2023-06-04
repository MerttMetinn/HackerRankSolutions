#include <stdio.h>

int max_of_them(int a,int b,int c,int d);

int main() 
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_them(a,b,c,d);
    
    printf("%d",ans);
    
    return 0;
}

int max_of_them(int a,int b,int c,int d) {
    
    int max_of_four;
    
    if(a>=b && a>=c && a>=d)
    {
        max_of_four = a;
        return a;
    }
    else if(b>=a && b>=c && b>=d)
    {
        max_of_four = b;
        return b;
    }
    else if (c>=a && c>=b && c>=d)
    {
        max_of_four = c;
        return c;
    }
        
    else if (d>=a && d>=c && d>=b)
    {
        max_of_four = d;
        return d;
    }
    
    return 0;
    
}
