#include <stdio.h>
#include <string.h>

 Hàm tìm kiếm tên trong chuỗi họ tên
void timKiemTen(char hoTen[], char ten[]) {
    if (strstr(hoTen, ten) != NULL) {
        printf("Ten '%s' ton tai trong chuoi ho ten '%s'.\n", ten, hoTen);
    }
    else {
        printf("Ten '%s' khong ton tai trong chuoi ho ten '%s'.\n", ten, hoTen);
    }
}

int main() {
    char hoTen[100];
    char ten[50];

    // Nhập chuỗi họ tên
    printf("Nhap ho ten: ");
    fgets(hoTen, sizeof(hoTen), stdin);
    hoTen[strcspn(hoTen, "\n")] = '\0'; // Loại bỏ ký tự xuống dòng

    // Nhập tên cần tìm
    printf("Nhap ten can tim: ");
    fgets(ten, sizeof(ten), stdin);
    ten[strcspn(ten, "\n")] = '\0'; // Loại bỏ ký tự xuống dòng

    // Gọi hàm tìm kiếm tên
    timKiemTen(hoTen, ten);

    return 0;
}
