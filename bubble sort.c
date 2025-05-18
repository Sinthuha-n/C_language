#include <stdio.h>

int main() {
    int A[100], n, temp;

    // Get number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Get the elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

for (int i=0;i<n-1;i++)
{
    for(int j=0;j<n-1-i;j++){
        if(A[j])>A[j+1]
        {
            temp = A[j];
            A[j] = A[j+1];
            A[j+1] = temp;
        }
    }
}
   printf("Sorted array in ascending order:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}