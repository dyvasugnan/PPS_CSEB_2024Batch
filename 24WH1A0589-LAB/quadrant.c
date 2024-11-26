//To find in which quadrant the given value lies
#include<stdio.h>
  int main()  {
      
    int x,y;

    printf("Enter a point");
    scanf("%d%d",&x,&y);
    
      if(x>0 && y>0)
        {
         printf("The point lies in quadrant 1");
        }

      if(x<0 && y>0)
        {
         printf("The point lies in 2nd Quadrant");
        }

      if(x<0 && y<0)
        {
         printf("The point lies in 3rd quadrant");
        }

      if(x>0 && y<0)
        {
         printf("The point lies in 4th quad");
        }

     return 0;
               }
