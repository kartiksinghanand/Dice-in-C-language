#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
   int dice,choice=1;
   srand(time(0));
   while(choice!=0)
   {
       dice=rand()%6+1;
       printf("Dice: %d\n",dice);
      c: printf("Throw dice again? 1.Yes 2.No \n");
       scanf("%d",&choice); 
       if(choice==2)
       choice=0;
       else if(choice==1)
       choice=1;
       else
       {
           goto c;
       }
       
   }
    return 0; 
}
