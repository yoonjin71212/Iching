#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include <math.h>
#define PI 3.1415926535897
#define HEIGHT_WIDTH 1000
typedef struct BMPSIN BMPSIN;
static unsigned char rgb[HEIGHT_WIDTH][HEIGHT_WIDTH];
int a=0,b=0,c=0;
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
        (*y)++;
        return *y;
    }
}
void pattern(int count, int x, int y)
{
    int *res=malloc(sizeof(int));
    while (1)
    {
back:
        if(*res==1) {
            *res+=yi(&x,&y);
        } else {
            *res = yi(&x,&y);
        }
        printf("%d \n", *res);
    }
}


int main(int argc, char **argv)
{
  pattern(a,b,c);
	return 0;
}
