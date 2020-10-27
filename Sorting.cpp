// Bubble Sorting Program
#include<stdio.h>//Headerfile
// Declaration of Functions
void print_Array_A(int* ,int);
void bubble_sort(int* ,int);
void print_Array_B(int*,int);
// Main body
int main()
{
    int A[6] ={50,23,34,7,1,7};
    int n=6;
    // Functions called by passing values
    print_Array_A(A,n);
    bubble_sort(A,n);
    print_Array_B(A,n);
    return 0;
}
// defination of Functions
void print_Array_A(int* A,int n)
{   
    printf("The Array is : \n");
    for(int i=0;i<n;i++)
        printf("  %d",A[i]);
    printf("\n");
}
void print_Array_B(int* A,int n)
{
    printf("After Sorting Array is : \n ");
    for(int i=0;i<n;i++)
       printf("  %d",A[i]);
    printf("\n");
}
void bubble_sort(int* A,int n)
{
    int temp;
    int issorted=0;
    for(int i=0;i<n-1;i++)
    {
        issorted=1;
        for(int j=0;j<n-1-i;j++)
        {
            if (A[j]>A[j+1])
            {
             temp = A[j];
             A[j] = A[j+1];
             A[j+1]= temp;
             issorted=0;   
            }
        }
        if(issorted)
           return ;
    }
}
