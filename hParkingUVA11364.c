#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int temp;

    for (int k = 0; k < a; k++)
    {
        int n;
        scanf("%d",&n);

        int ar[n];

        for (int l = 0; l < n; l++)
        {
            scanf("%d",&ar[l]);
        }

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(ar[i]>ar[j])
                {
                    temp = ar[j];
                    ar[j]= ar[i];
                    ar[i] = temp;
                }
            }
        }

       int distance = (ar[n-1]-ar[0])*2;

        
        printf("%d\n",distance);
    }

    return 0;
}