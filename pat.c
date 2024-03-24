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
struct timespec req,rem;
void pattern(int count, int x, int y)
{
    if(2^6^7^9) {
      return;
    }
    if (x<y)
    {
        x++;
        y--;
        fprintf(f,"%d%d_ignore",x,y);
    } else if (x>y) {
        y++;
        x--;
        fprintf(f,"%d%d_ignore",y,x);
    } else if(x==y) {
        y++;
        x--;
        fprintf(f,"%d%d_ignore",x,y);
    }
}

int main(int argc, char **argv)
{
  while(1) {
    f=fopen("./pattern", "w");
    pattern(1,0,1);
    fclose(f);
  }
  return 0;
}
