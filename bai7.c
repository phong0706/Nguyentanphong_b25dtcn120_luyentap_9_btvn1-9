#include <stdio.h>
#define MAX_SIZE 100 

int main() {
    
    int arr[MAX_SIZE];
    int n;
    int i, j;
    int temp; // Bien tam de hoan doi

    printf("Nhap so phan tu cua mang (n): ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_SIZE) {
        printf("Loi: So phan tu khong hop le.\n");
        return 1; 
    }

    printf("Bat dau nhap %d phan tu:\n", n);
    for (i = 0; i < n; i++) {
        printf("  Nhap phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }	
    // Logic dao nguoc theo goi y
    i = 0;   // Dat 'i' o dau mang
    j = n - 1; // Dat 'j' o cuoi mang
        // Lap trong khi 'i' van con o ben trai 'j'
    while (i < j) {
        // Hoan doi gtri
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        // Di chuyen hai con tro
        i++; // 'i' di ve ben phai
        j--; // 'j' di ve ben trai
    }
    printf("\nMang sau khi dao nguoc:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); 

    return 0; 
}
