#include<stdio.h>
int main()
{
    int n;
    int i;
    printf("Enter any number you want to convert\n");
    scanf("%d",&n);
    printf("In what you want to convert to decimal as follows\n");
    printf("1 for Binary ,2 for octal \n");
    scanf("%d",&i);
    switch(i)
    {
        case 1:
        {int rem,sum=0,num=0;
            while(n>0)
            {
                rem=n%2;
                sum=sum*10+rem;
                n=n/2;
            }
            while(sum>0)
            {
                num=num*10+(sum%10);
                sum=sum/10;
            }
            printf("The converted number is %d",num);
            break;
        }
         case 2:
        {int rem,sum=0,num=0;
            while(n>0)
            {
                rem=n%8;
                sum=sum*10+rem;
                n=n/8;
            }
            while(sum>0)
            {
                num=num*10+(sum%10);
                sum=sum/10;
            }
            printf("The converted number is %d",num);
            break;
        }
        default:
        {
            printf("Not valid input");
            break;
        }
    }
}
