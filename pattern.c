#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include <math.h>
#define PI 3.1415926535897
#define HEIGHT_WIDTH 1000
typedef struct BMPSIN BMPSIN;
static unsigned char rgb[HEIGHT_WIDTH][HEIGHT_WIDTH];
long long a=0,b=0,c=0;
long long idx = 1;
int yi(int *x, int *y) {
    if ((*x)<(*y))
    {
        (*x)++;
        (*y)--;
        return *x;
    } else if ((*x)>(*y)) {
        (*y)++;
        (*x)++;
        return (*x)+(*y);
    } else if((*x)==(*y)) {
        (*x)++;
        return *y;
    }
}
void pattern(int count, int x, int y)
{
    long long *res=malloc(sizeof(int));
    int prev = 0;
    while (1)
    {
        if(*res==0) {
            *res+=yi(&x,&y);
        } else {
            back:
            *res = yi(&x,&y);
        }

        if ((*res%3)==0) {
            goto back;
        }
        if((*res%5)==0) {
            goto back;
        }
        if((*res%7)==0) {
            goto back;
        }
        if((*res%9)==0) {
            goto back;
        }
        printf("%lld \n", *res);
    }
}


int main(int argc, char **argv)
{
  printf("2 \n");
  printf("3 \n");
  printf("5 \n");
  printf("7 \n");
  pattern(a,b,c);
	return 0;
}

