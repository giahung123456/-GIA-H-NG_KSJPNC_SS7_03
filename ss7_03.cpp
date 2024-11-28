#include <stdio.h>

int main() {
    int arr[] = {47,33,6,2,7};  
    int i, kt = 0;  

   
    printf("Cac so chan trong mang la:\n");
    for (i = 0; i <5 ; i++) {
        if (arr[i] % 2 == 0) {  
            printf("%d ", arr[i]);
            kt = 1;  
        }
    }

    
    if (!kt) {
        printf("\nMang khong chua so chan\n");
    }

    
}