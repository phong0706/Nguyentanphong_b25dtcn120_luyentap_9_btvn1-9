#include <stdio.h>
#define MAX_SIZE 100 

int main() {
    
    int arr[MAX_SIZE]; 
    int n;     
	int i;        

    printf("Nhap so phan tu cua mang (n): ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_SIZE) {
        printf("Loi: So phan tu khong hop le (phai tu 1 den %d).\n", MAX_SIZE);
        return 1; 
    }

    printf("Bat dau nhap %d phan tu:\n", n);
    for (i = 0; i < n; i++) {
        printf("  Nhap phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nCac phan tu ban vua nhap la:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); 

    return 0; 
}
