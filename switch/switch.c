#include<stdio.h>
#include<stdlib.h>
int incr(int x)
{
     x=x+1;
     return x;
}
int decr(int x)
{
    x=x-1;
    return x;
}
int main()
{
    int num,ch;
    printf("enter the  two digit number of your choice");
    scanf("%d",&num);
    printf("enter the choice");
    printf("This is the following menu options\n");
    printf("----------1.Choose here for incrementing the number-----------------\n");
    printf("----------2.Choose here for decrementing the number-------------------\n");
    printf("----------3.EXIT THE PROGRAM----------------------------\n");
    scanf("%d",&ch);
    		while(ch!=3){
    
    			switch(ch) {
        			case 1: {
					  int res;
					  res=incr(num);
					  printf("the incremented number is %d\n",res);
					  break;
        				}
				   case 2:{
					  int res;
					  res=decr(num);
					  res=res-1;
					  printf("the decremented number is %d\n",res);
					  break;
					  
				   }
				   case 3:{
					  exit(0);
					  break;
				   }
    			}printf("This is the following menu options\n");
    printf("----------1.Choose here for incrementing the number-----------------\n");
    printf("----------2.Choose here for decrementing the number-------------------\n");
    printf("----------3.EXIT THE PROGRAM----------------------------\n");
    printf("enter the choice");
    scanf("%d",&ch);
    }       
    

    return 0;
}




