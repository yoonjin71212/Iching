#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <stdatomic.h>
#include <math.h>
typedef atomic_int int;
FILE *f;
struct timespec req,rem;
void pattern(int x, int y)
{
    if (x<y)
    {
        x++;
        y--;
        fprintf(f,"%c%c",x,y);
    } else if (x>y) {
        y++;
        x--;
        fprintf(f,"%c%c",y,x);
    } else if(x==y) {
        y++;
        x--;
        fprintf(f,"%c%c",x,y);
    }
}

int main(int argc, char **argv)
{
  while(1) {
    pattern(3,-2);
  }
  return 0;
}
