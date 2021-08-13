#include<stdio.h>
int main()
{
int data[5];
printf("enter elements : ");    
for(int i=0;i<5;i++)
  scanf("%d",&data[i]);
printf("your entered :\n");
    
for(int i=0;i<5;++i)
    
printf("%d\n",*(data[i]));
  
  return 0;

}

