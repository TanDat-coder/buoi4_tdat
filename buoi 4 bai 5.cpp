#include <stdio.h>
#include <string.h>

void catChuoiHoTen(const char* hoTen, char* hoLot, char* ten) {
    int i, j;
    int length = strlen(hoTen);

    // Tìm vị trí khoảng trắng cuối cùng
    for (i = length - 1; i >= 0; i--) {
        if (hoTen[i] == ' ') {
            break;
        }
    }

    // Sao chép họ lót
    for (j = 0; j < i; j++) {
        hoLot[j] = hoTen[j];
    }
    hoLot[j] = '\0'; // Kết thúc chuỗi họ lót

    // Sao chép tên
    strcpy(ten, hoTen + i + 1);
}

int main() {
    char hoTen[] = "Nguyễn Văn Anh";
    char hoLot[50];
    char ten[50];

    catChuoiHoTen(hoTen, hoLot, ten);

    printf("Họ lót: %s\n", hoLot);
    printf("Tên: %s\n", ten);

    return 0;
}
