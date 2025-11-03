#include <stdio.h>
#include <math.h> 
#define MAX_SIZE 100 

// Ham con (function) de kiem tra so nguyen to
// Tra ve 1 (DUNG) neu la so nguyen to
// Tra ve 0 (SAI) neu khong phai
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    // Duyet tu 2 den can bac hai (sqrt) cua num
    for (int i = 2; i <= sqrt(num); i++) {
        // Neu num chia het cho bat ky so nao trong khoang nay
        if (num % i == 0) {
            return 0; // Thi no khong phai so nguyen to
        }
    }
    // Neu hoan thanh vong lap ma khong co gi
    return 1; // Thi no la so nguyen to
}
int main() {
    
    int arr[MAX_SIZE];
    int n;
    int i;
    int primeSum = 0; // Bien de tinh tong, bat dau bang 0

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0 || n > MAX_SIZE) {
        printf("Loi: So phan tu khong hop le.\n");
        return 1; 
    }
    printf("Bat dau nhap %d phan tu:\n", n);
    for (i = 0; i < n; i++) {
        printf("  Nhap phan tu thu %d: ", i + 1); 
        scanf("%d", &arr[i]);
    }
    printf("\nCac so nguyen to trong mang la: ");
    // Duyet qua mang de kiem tra
    for (i = 0; i < n; i++) {
        
        // Goi ham con 'isPrime' de kiem tra tung phan tu
        if (isPrime(arr[i]) == 1) {
            
            // Neu ham tra ve 1 (DUNG)
            printf("%d ", arr[i]);
            primeSum = primeSum + arr[i]; 
        }
    }
    printf("\nTong cac so nguyen to la: %d\n", primeSum);

    return 0; 
}
