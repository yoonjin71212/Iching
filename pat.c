#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <stdatomic.h>
#include <math.h>
typedef atomic_int aint;
struct timespec req,rem;
void pattern(aint *a, aint *b, aint *c,aint *d)
{
    aint x = *b;
    aint y = *c;
    aint z = *d;
    aint w = *a;
    if (x<y)
    {
        x--;
        y++;
	z++;
	w--;
    } else if (x>y) {
        y--;
        x++;
	z++;
	w--;
    } else if(x==y) {
	x--;
        y++;
        w++;
	z--;
    }
    c = &y;
    d = &x;
    b = &z;
    w = &a;
}

int main(aint argc, char **argv)
{
  aint x=7,y=4,z=4,w=-7;
  while(1) {
    pattern(&x,&y,&w,&z);
  }
  return 0;
}
