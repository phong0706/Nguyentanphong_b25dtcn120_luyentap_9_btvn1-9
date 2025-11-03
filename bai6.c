#include <stdio.h>
#define MAX_SIZE 100 

int main() {
    
    int arr[MAX_SIZE];
    int n;
    int i;
    int searchValue; // Gia tri 'x' can tim
    int found = 0;   // Co hieu (flag) de kiem tra

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
    printf("\nNhap gia tri can tim (x): ");
    scanf("%d", &searchValue);
    for (i = 0; i < n; i++) {
        if (arr[i] == searchValue) { // tim kiem 
            // Neu tim thay, in ra va bat co hieu 'found'
            printf("  Tim thay %d tai vi tri (index) %d\n", searchValue, i);
            found = 1;
        }
    }
    // Sau khi kiem tra het mang, neu co hieu 'found' van la 0
    // nghia la khong tim thay
    if (found == 0) {
        printf("  Khong tim thay gia tri %d trong mang.\n", searchValue);
    }

    return 0; 
}
