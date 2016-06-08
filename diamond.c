#include<stdio.h>
int main()
{
    int x=0,y=0;
    for(y=0;y<11;y++)
    {
        for(x=0;x<11;x++)
        {
            if(x+y==5||x-y==5||y-x==5||x+y==15)
                printf("*");
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
