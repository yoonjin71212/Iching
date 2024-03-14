#include <stdio.h>
#include <string.h>
#include <math.h>
#define PI 3.1415926535897
#define HEIGHT_WIDTH 1000
typedef struct BMPSIN BMPSIN;
static unsigned char rgb[HEIGHT_WIDTH][HEIGHT_WIDTH];
int a=0,b=0,c=0;
void pattern(int count, int x, int y)
{
    if(x==1000||y==1000) {
        return;
    }
    while (1)
    {
        if (x<y)
        {
            x++;
            y--;
            printf("%d%d",x,y);
        } else if (x>y) {
            y++;
            x++;
            printf("%d%d",y,x);
        } else if(x==y) {
            y++;
            printf("%d%d",y,x);
        }
    }
}

int main(int argc, char **argv)
{
  pattern(a,b,c);
	return 0;
}
