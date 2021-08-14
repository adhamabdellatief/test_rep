#include <stdlib.h>
    int arr[5];
    int i,j,swap;
int main()
{
        for(i=0;i<5;i++)
        {
            printf("enter num ");
            printf("%d\n",i);
            scanf("%d",&arr[i]);
        }

    for(i=0;i<5;i++)
    {
     for(j=i+1;j<5;j++)
     {
         if(arr[i]>arr[j])
         {
             swap=arr[i];
             arr[i]=arr[j];
             arr[j]=swap;
         }
     }}
     printf("array in ascending\n");
     for(i=0;i<5;i++)
     {
         printf("%d\t",arr[i]);
     }

        int max;
        int y;
        max=arr[0];
        for(i=1;i<5;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
                y=i;
            }
        }
        printf("\nmaximum value in array =");
        printf("%d\t",max);
        printf("in position");
        printf("%d\n",y);
        int mini ;
        int x=0;
        mini=arr[0];
        for(i=1;i<5;i++)
        {
            if(arr[i]<mini)
            {
                mini=arr[i];
                x=i;
            }
        }
        printf("minimum value in array =");
        printf("%d\t",mini);
        printf("in position");
        printf("%d\n",x);
        return 0;
}

