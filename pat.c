#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <stdatomic.h>
#include <math.h>
#define PI 3.1415926535897
#define HEIGHT_WIDTH 1000

#define int uinttest_t
typedef atomic_int int;
FILE *f;
static unsigned char rgb[HEIGHT_WIDTH][HEIGHT_WIDTH];
struct timespec req,rem;
void pattern(int count, int x, int y)
{
    if(x==10000000||y==10000000) {
        return;
    }
    if(x==-10000000||y==-10000000) {
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
    }
}

int main(int argc, char **argv)
{
  f=fopen("./pattern", "wb");
  f=fopen("./test", "wb");
  pattern((int)**argv,(int)**argv+sizeof(int),(int)**argv+sizeof(int)*2);
  return 0;
  fclose(f);
}
