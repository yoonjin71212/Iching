#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#define PI 3.1415926535897
#define HEIGHT_WIDTH 1000
typedef struct BMPSIN BMPSIN;
FILE *f;
static unsigned char rgb[HEIGHT_WIDTH][HEIGHT_WIDTH];
int a=0,b=0,c=0;
void pattern(int count, int x, int y)
{
    if(x==10000000||y==10000000) {
        return;
    }
    while (1)
    {
        if (x<y)
        {
            x++;
            y--;
            fprintf(f,"%d %d",x,y);
        } else if (x>y) {
            y++;
            x++;
            fprintf(f,"%d %d",y,x);
        } else if(x==y) {
            y++;
            fprintf(f,"%d %d",y,x);
        }
        sleep(0.1);
    }
}

int main(int argc, char **argv)
{
  f=fopen("./test.txt", "wt");
  pattern(a,b,c);
  return 0;
  fclose(f);
}
