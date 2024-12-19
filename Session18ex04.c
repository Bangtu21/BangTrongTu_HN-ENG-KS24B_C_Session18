#include <stdio.h>
struct SinhVien {
    int id;
    char fullName[50];
    int age;
    char phoneNumber[20];
};
int main(){
	struct SinhVien sinhVien[50];
	for (int i = 0; i < 5; i++) {
        sinhVien[i].id = i + 1;
        printf("\nThong tin cua sinh vien %d: \n", sinhVien[i].id);
        printf("Ten day du cua sinh vien: ");
        fgets(sinhVien[i].fullName, sizeof(sinhVien[i].fullName), stdin);
        printf("Nhap so tuoi cua sinh vien: ");
        scanf("%d", &sinhVien[i].age);
        fflush(stdin);
        printf("Nhap so dien thoai cua sinh vien: ");
        fgets(sinhVien[i].phoneNumber,sizeof(sinhVien[i].phoneNumber),stdin);
    }
	for (int i = 0; i < 5; i++) {
        printf("\nID sinh vien: %d\n", sinhVien[i].id);
        printf("Ho va ten sinh vien: %s", sinhVien[i].fullName);
        printf("Tuoi cua sinh vien: %d\n", sinhVien[i].age);
        printf("So dien thoai cua sinh vien: %s\n", sinhVien[i].phoneNumber);
    }
}
