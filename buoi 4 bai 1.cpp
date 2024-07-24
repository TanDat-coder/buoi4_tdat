#include <stdio.h>
#include <ctype.h>

int is_digit_string(const char* s) {
    while (*s) {
        if (!isdigit(*s)) {
            return 0; // Không phải ký số
        }
        s++;
    }
    return 1; // Toàn ký số
}

int main() {
    const char* s = "123456";
    if (is_digit_string(s)) {
        printf("Chuoi chua toan ky so.\n");
    }
    else {
        printf("Chuoi khong chua toan ky so.\n");
    }
    return 0;
}
