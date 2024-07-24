#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char name[50];
    int age;
    char id[10];
} Student;

void inputStudents(Student students[], int* n) {
    printf("Nhap so luong sinh vien: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        printf("Ten: ");
        scanf("%s", students[i].name);
        printf("Tuoi: ");
        scanf("%d", &students[i].age);
        printf("Ma so sinh vien: ");
        scanf("%s", students[i].id);
    }
}

void displayStudents(Student students[], int n) {
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("Ma so sinh vien: %s\n", students[i].id);
    }
}

void bruteForceSearch(char T[], char P[]) {
    int n = strlen(T);
    int m = strlen(P);
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (T[i + j] != P[j]) {
                break;
            }
        }
        if (j == m) {
            printf("Chuoi P xuat hien tai vi tri %d trong T\n", i);
        }
    }
}

void searchFromKeyboard() {
    char T[MAX], P[MAX];
    printf("Nhap chuoi T: ");
    scanf("%s", T);
    printf("Nhap chuoi P: ");
    scanf("%s", P);
    bruteForceSearch(T, P);
}

void searchFromFile() {
    char T[MAX], P[MAX];
    FILE* file;
    file = fopen("text.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file\n");
        return;
    }
    fscanf(file, "%s", T);
    fclose(file);
    printf("Nhap chuoi P: ");
    scanf("%s", P);
    bruteForceSearch(T, P);
}

int main() {
    Student students[MAX];
    int n, choice;
    do {
        printf("Menu:\n");
        printf("1. Nhap danh sach sinh vien\n");
        printf("2. Hien thi danh sach sinh vien\n");
        printf("3. Tim chuoi P trong T (nhap tu ban phim)\n");
        printf("4. Tim chuoi P trong T (doc tu file)\n");
        printf("5. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            inputStudents(students, &n);
            break;
        case 2:
            displayStudents(students, n);
            break;
        case 3:
            searchFromKeyboard();
            break;
        case 4:
            searchFromFile();
            break;
        case 5:
            printf("Thoat chuong trinh\n");
            break;
        default:
            printf("Lua chon khong hop le\n");
        }
    } while (choice != 5);
    return 0;
}
