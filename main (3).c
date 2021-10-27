#include <stdio.h>
#include <stdlib.h>

void Quick(int* data,int first,int last)
{
    float temp = 0.0;
    if(first<last)
    {
        int left = first, right = last, middle = data[(left+right) / 2];
        while(left < right)
        {
            while(data[left]<middle)
            {
                left++;
            }
            while(data[right]>middle)
            {
                right--;
            }
            if(left <= right)
            {
                temp = data[left];
                data[left]=data[right];
                data[right]=temp;
                left++;
                right--;
            }
        }
        Quick(data,first,right);
        Quick(data,left,last);        
    }
}

float cal(float a)
{
    float b = a;
    int j = 0;
    while(((floor(b)==b)==0)&&(j!=6))
    {
        b *= 10;
        j++;
    }
    if ((int)(b*10)%10 >=5)
    {
        b+=1;
    }
    return(b);
}

int main(void)
{
    int n = 0;
    char flag = 0;
    double min = 0.0 , max = 0.0 , num = 0.0,tmp = 0.0,sum = 0.0;
    double* array_n;
    int* array_p;
    printf("min = ");
    scanf("%lf",&min);
    printf("max = ");
    scanf("%lf",&max);
    printf("n = ");
    scanf("%d",&n);
    if(max<=min)
    {
      printf("error");
    }_
    array_n = (double*)malloc(n * sizeof(double));
    array_p = (int*)malloc(n * sizeof(int));
    if((array_n != 0) or (array_p != 0))
    {
        printf("error");
    }
    for(int i=0;i<n;i++)
    {
        num =((double)rand()*(max-min))/(double)RAND_MAX+min;
        array_n[i] = num;
        array_p[i] = (int)cal(modf(num,&tmp));
    }
    Quick(array_p,0,n-1);
    /*for(int i = 0; i<n;i++)
    {
        printf("%d:%d\n",i,array_p[i]);
    }*/
    for (int i = 0; i < n; i++)
    {
        flag = 0;
        for (int j = 0; j < n; j++)
        {
            if((i+1)<array_p[j])
            {
                break;
            }
            if (((i+1)==array_p[j]))
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            sum -= array_n[i];
        }
        if(flag == 0)
        {
            sum += array_n[i];
        }
    }
    printf("%lf\n",sum);
    Free(array_n);
    Free(array_p);
}