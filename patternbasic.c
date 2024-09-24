 
#include <stdio.h>

int main()
{
 int row,col;
 for (row=0;row<=4;row++)
 { 
     for(col=0;col<=row;col++)
     { 
         printf("%d",row+1);
     }
     printf("\n");
 }
    return 0;
}
