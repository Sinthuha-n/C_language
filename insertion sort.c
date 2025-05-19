#include<stdio.h>
int main(){

int A[100],temp,n,j;

    // Get number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Get the elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    for(int i=1;i<n;i++){
        temp = A[i];
        j=i-1;
        while(j>=0 && A[j]>temp)
        {
            A[j+1] =A[j];
            j--;
        }
        A[j+1] = temp;
    }
    printf("Sorted array in ascending order:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}