#include <stdio.h>

int main() {
    int arr[] = {1, 5, 2, 3, 23, 5, 1, 2};
    // Tu dong tinh so phan tu 'n'
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j;
    int maxFreq = 0;    // Luu so lan xuat hien CAO NHAT
    int modeValue = arr[0]; // Luu gia tri co so lan xuat hien cao nhat
    
    printf("Mang da khai bao: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Vong lap 'i' (ben ngoai) de chon mot phan tu
    for (i = 0; i < n; i++) {
        
        int currentFreq = 0; // Bien dem so lan xuat hien cua arr[i]
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                currentFreq++; // Tang bien dem neu tim thay
            }
        }
        // Kiem tra xem co pha vo ky luc khong
        if (currentFreq > maxFreq) {
            maxFreq = currentFreq; // Cap nhat ky luc moi
            modeValue = arr[i];    // Luu lai gia tri da pha vo ky luc
        }
    }
    printf("Phan tu co so lan xuat hien nhieu nhat la: %d\n", modeValue);
    return 0;
}
