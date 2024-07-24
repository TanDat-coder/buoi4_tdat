#include <stdio.h>
#include <ctype.h>

void capitalizeWords(char* str) {
    int inWord = 0; // Biến kiểm tra trạng thái trong từ hay không

    while (*str) {
        if (isalpha(*str)) {
            if (!inWord) {
                *str = toupper(*str); // Chuyển chữ cái đầu thành in hoa
                inWord = 1;
            }
            else {
                *str = tolower(*str); // Chuyển các chữ cái còn lại thành chữ thường
            }
        }
        else {
            inWord = 0; // Kết thúc từ khi gặp ký tự không phải chữ cái
        }
        str++;
    }
}

int main() {
    char str[] = "NGÀY HÔM NAY TRỜI ĐẸP";
    capitalizeWords(str);
    printf("%s\n", str);
    return 0;
}
