#include<stdio.h>

int main(){
    int A[100],temp,n,j;

    printf("Enter number of elements:");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
       scanf("%d",&A[i]);
    }

    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<A[min]){
                min=j;
            }
        }
     if(min!=i){
        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
     }   
    }
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}