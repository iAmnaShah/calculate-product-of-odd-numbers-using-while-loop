#include<stdio.h>
int main()
{
    int i=3,product=1;
    printf("The odd numbers are:");
    while(i<19)
    {
        if(i%2!=0)
        {
            printf("%d",i);
        }
        product*=i;
    }
    printf("The product of odd numbers is %d",product);
    return 0;
}
