/*ESCARPE,VANESSA T. BSIT 1-A T116
Create a program that accepts 10 positive integers and
sorts these in descending order (highest to lowest).*/

#include <stdio.h>
void printArray(int arr[],int size)
{
    int k;
    printf("\nSorted list: ");
    for(k = 0;k<size;k++)
    {
        if(k==size-1)
         {printf("%d",arr[k]);}

        else
         {printf("%d, ",arr[k]);}
    }
    printf("\n");
}
void swap(int* a,int* b)
{
    int cons = *a;
    *a = *b;
    *b = cons;
}
void bubbleSort(int *arr,int size)
{
    int k = 0;
    while (k<size-1)
    {
        if(arr[k] < arr[k+1])
         {swap(&arr[k],&arr[k+1]);}

        k++;
        bubbleSort(arr,size-1);
    }
}
int main()
{
    int numbers[10];
    printf("\n\n NUMBER SORTING \n");
    for (int k = 1; k <= 10; k++)
    {
        int temp;
        printf("\n[%d] Input number: ",k);
        scanf("%d",&temp);
        if(temp <= 0)
        {
            printf("This is an invalid input. Try Again.\n");
            --k;
            continue;
        }
        numbers[k-1] = temp;
    }
    bubbleSort(numbers,10);
    printArray(numbers,10);
    return 0;
}
