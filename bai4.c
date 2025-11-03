#include <stdio.h>

#define MAX_SIZE 100 

int main() {
    
    int arr[MAX_SIZE]; 
    int n;             
    int i;
    int sum = 0; // Bien de luu tong, phai khoi tao = 0
    float average; // Bien de luu trung binh, phai la so thuc

    printf("Nhap so phan tu cua mang (n): ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_SIZE) {
        printf("Loi: So phan tu khong hop le (phai tu 1 den %d).\n", MAX_SIZE);
        return 1; 
    }

    printf("Bat dau nhap %d phan tu:\n", n);
    
    // Vong lap nay vua nhap, vua tinh tong luon
    for (i = 0; i < n; i++) {
        printf("  Nhap phan tu arr[%d]: ", i); // arr[%d] va arr[i] nhu nhau 
        scanf("%d", &arr[i]);
        sum = sum + arr[i]; 
    }
    average = (float)sum / n;

    // In ket qua
    printf("\nTong cua %d phan tu la: %d\n", n, sum);
    printf("Gia tri trung binh la: %.2f\n", average); 

    return 0; 
}
