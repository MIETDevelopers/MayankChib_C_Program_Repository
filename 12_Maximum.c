//Name: Mayank Chib
//Program: Maximum of n numbers using for loop
#include<stdio.h>     //Pre-process directive to include standard input and output functions header file 

int main()            //Main function 
{
  int i,num,n,large=0;   // variable declaration

  printf("How many numbers: "); 
  scanf("%d",&n);
  
  for(i=0; i<n; i++)       // Loop to store largest number
  {
    printf("\nEnter number %d: ",i+1);
    scanf("%d",&num);
    if(num>large)
    large=num;
  }

  printf("\n\nThe Largest Number is %d",large);    //print statement should be according to Question
  return 0;       // return 0 to oprerating system

}