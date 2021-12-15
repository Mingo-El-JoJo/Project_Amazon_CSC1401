#include <stdio.h>

int sum(int* arr,int size)
 {
     int sum=0;
     arr[0]=0;
    for(int i=0; i<size ; i++)
    {
        sum += arr[i];
    }
    return sum;
 }


int main()
{
    int arr[]={1,2,3,4,5,6};
    int s= sum(arr,6);
    printf("The sum is %d \n",s);
    printf("The first elmt is %d \n",arr[0]);
    return 0;
}

