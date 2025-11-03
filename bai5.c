#include <stdio.h>

#define MAX_SIZE 100 // Suc chua toi da cua mang

int main() {
    
    int arr[MAX_SIZE]; // Mang de luu tru so ( kich thuoc toi da cua mang )
    int n;             
    int i;            
    int evenCount = 0; // Bien dem so chan, bat dau tu 0
    int oddCount = 0;  // Bien dem so le, bat dau tu 0

    printf("Nhap so phan tu cua mang (n): ");
    scanf("%d", &n);
    if (n <= 0 || n > MAX_SIZE) {
        printf("Loi: So phan tu khong hop le.\n");
        return 1; // Thoat chuong trinh voi ma loi
    }

    printf("Bat dau nhap %d phan tu:\n", n);
    for (i = 0; i < n; i++) {
        printf("  Nhap phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
        
        // Kiem tra chan le bang phep chia lay du (toan tu %)
        if (arr[i] % 2 == 0) { // Neu chia 2 du 0
            evenCount++; // La so chan, tang bien dem chan
        } else { // Neu khong (nghia la chia 2 du 1)
            oddCount++; // La so le, tang bien dem le
        }
    }
    printf("\n--- KET QUA DEM ---\n");
    printf("So luong so chan la: %d\n", evenCount);
    printf("So luong so le la: %d\n", oddCount);

    printf("\n--- DANH SACH RIENG BIET ---\n");

    printf("Danh sach cac so chan: ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { 
            printf("%d ", arr[i]); // Neu chan thi printf
        }
    }
    printf("\n"); 
    printf("Danh sach cac so le: ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) { // Kiem tra lai (khac 0)
            printf("%d ", arr[i]); // Neu le thi printf
        }
    }
    printf("\n");

    return 0; 
}
