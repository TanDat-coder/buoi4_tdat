#include <stdio.h>
#include <ctype.h>

static void trimSpaces(char* str) {
    char* dest = str; // Con trỏ để lưu vị trí của chuỗi đã chuẩn hóa
    int inWord = 0; // Cờ để kiểm tra xem có đang ở trong từ hay không

    while (*str) {
        if (!isspace(*str)) {
            if (inWord && dest != str) {
                *dest++ = ' ';
            }
            inWord = 1;
            *dest++ = *str;
        }
        else if (inWord) {
            inWord = 0;
        }
        str++;
    }
    *dest = '\0'; // Kết thúc chuỗi đã chuẩn hóa
}

int main() {
    char str[] = "  Đây   là   một   ví   dụ   về   hàm   xóa   khoảng   trắng   thừa.  ";
    trimSpaces(str);
    printf("%s\n", str);
    return 0;
}
