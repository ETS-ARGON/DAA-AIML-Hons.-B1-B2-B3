#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n], i, j, l = 0, flag = 0;
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        printf("-----------------------------\n");
        printf("Pass number %d\n", i);
        printf("-----------------------------\n");
        int swap_count = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            l++;
            if (arr[j] > arr[j + 1])
            {
                int temp;
                flag++;
                swap_count++;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            printf("pass no %d : ", j);
            for (int k = 0; k < n; k++)
            {
                printf("%d\t", arr[k]);
            }
            printf("\n");
        }
        printf("no. of swaps : %d", swap_count);
        printf("\nTotal no. of non swaps : % d\n", (n - i - 1) - swap_count);
        swap_count = 0;
        printf("\n");
    }
    printf("\nTotal no. of swaps : %d\n", flag);
    printf("\nTotal no. of non swaps : %d\n", l - flag);
    printf("Sorted array is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
