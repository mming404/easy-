#include<stdio.h>
int main()
{
    int i,t;
    int pai_xu2(int array[]);
    int arr[10];
    printf("please enter 10 number:\n");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    printf("the finally number is:");
    pai_xu2(arr);
    for(i=0;i<10;i++)
        printf("%d ",arr[i]);
    return 0;
}
//假设arr={3，4，5，1，3，4，8，5，6，4，2，}
int pai_xu(int array[])//冒泡排序法：
{
    int j,k;
    for(j=0;j<10;j++)
        for(k=0;k<9-j;k++)
        {
            if(array[k] > array[k+1])
            {
                int t=array[k];
                array[k]=array[k+1];
                array[k+1]=t;
            }
        }
    return(array);
}

//选择排序法：
int pai_xu2(int array[])
{
    int j,k;
    for(j=0;j<10;j++)
        for(k=1+j;k<10;k++)
        {
            if(array[j]>array[k])
            {
                int t=array[j];
                array[j]=array[k];
                array[k]=t;
            }
        }
    return(array);
}