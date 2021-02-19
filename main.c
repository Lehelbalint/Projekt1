#include <stdio.h>

int osszeg(int,int);
int main() {
    int x,y;
    scanf("%i%i",&x,&y);
    x=osszeg(x,y);
    printf("%i",x);
    return 0;
}
int osszeg(int x,int y)
{
    return x+y;
}