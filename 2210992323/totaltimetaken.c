#include <stdio.h>
int main()
{
    int x,y,units;
    float amt;
    printf("Enter the units:  ");
    scanf("%d",&units);
    if (units<=50)
    {
        amt=units*0.50;
    }
    else if (units<=150)
    {
        amt=25+(units*0.75);
    }
    else if (units<=250)
    {
        amt=100+(units*1.20);
    }
    else
    {
        amt=220+(units*1.70);
    }
    x=amt*0.20;
    y=amt+x;
    printf("Total Bill: %d",y);
    return 0;
    }
