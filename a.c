#include<stdio.h>
void main()
{
    int i,n,x,so=0,se=0,flag=0;
    printf("Enter total no : ");
    scanf("%d",&n);
    int a[n];
    x=fork();
    if(x>0)
    {

       // y=fork();
        //if(y==0)
        //{
            printf("Enter no's : ");
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
                if(a[i]%2 == 0)
                    se+=a[i];
                else
                    so+=a[i];
            }
            printf("Sum even : %d",se);
            flag=1;
        }
    else
    {
            while(flag!=1)
                wait(0);
            //while(flag==0)
              //  wait(0);
            printf("Sum odd : %d",so);

    }
}
