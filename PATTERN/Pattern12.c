/**
 *  Pattern 12
 *  13579
 *  3579
 *  579
 *  79
 *  9
 */

 #include<stdio.h>
 int main()
 {
     int i,j;
     for(i=1;i<=9;i=i+2)
     {
         for(j=i;j<=9;j+=2)
         {
           printf("%d",j);
         }
         printf("\n");
     }
     return 1;
 }
