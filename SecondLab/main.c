#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//Методы сортировок

void Bubble(float* data, int n)
{
    float temp = 0.0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (data[j] > data[j + 1])
            {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

void Insert(float* data, int n)
{
    float temp = 0.0;
    for (int i = 0; i < n; i++)
    {
        temp = data[i];
        int j = i;
        while ((j > 0) && (data[j - 1] > temp))
        {
            data[j] = data[j - 1];
            j--;
        }
        data[j] = temp;
    }
}

void Quick(float* data, int first, int last)
{
    float temp = 0.0;
    if (first < last)
    {
        int left = first, right = last;
        float middle = data[(left + right) / 2];
        do
        {
            while (data[left] < middle)
            {
                left++;
            }
            while (data[right] > middle)
            {
                right--;
            }
            if (left <= right)
            {
                temp = data[left];
                data[left] = data[right];
                data[right] = temp;
                left++;
                right--;
            }
        } while (left < right);
        Quick(data, first, right);
        Quick(data, left, last);
    }
}

// Главная програма

int main(void)
{
    FILE* F2;
    float* array;
    double start = 0, end = 0;
    int first = 0, last = 0;
    int n = 0, tmp = 0;
    while (tmp != 4)
    {
        F2 = fopen("input.txt", "r");
        fscanf(F2, "%d", &n);
        array = (float*)malloc(n * sizeof(float));
        for (int i = 0; i < n; i++)
        {
            fscanf(F2, "%f", &array[i]);
        }
        pclose(F2);
        printf("\n\n");
        printf("\nEnter sorting method\n1-Bubble\n2-Insert\n3-Quick\n4-Exit\nInput:");
        scanf("%d", &tmp);
        start = clock();
        if (tmp == 1)
        {
            Bubble(array, n);
        }
        if (tmp == 2)
        {
            Insert(array, n);
        }
        if (tmp == 3)
        {
            Quick(array, 0, n - 1);
        }
        if (tmp == 4)
        {
            return 0;
        }
        end = clock();
        printf("\nTime = %lf\n",(end - start) / (CLOCKS_PER_SEC));

    }
    free(array);
    return 0;
}