#include <stdio.h>
// reversing a number
int main()
{
    int a,b,num,rev=0,i=0,output;
    printf("enter the no. of digits in the number you are going to enter \n ");
    scanf("%d",&a);
    printf("enter the number now\n");
    scanf("%d",&num);
    while(i<=a)
    {
        b=num%10;
        num=num/10;
        rev=(rev*10)+b;
        i++;
        if(i==a)
        {output=rev;}
    }
    printf("%d",output);
    return 0;
}
