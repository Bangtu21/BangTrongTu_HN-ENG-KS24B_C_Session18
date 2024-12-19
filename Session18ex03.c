#include<stdio.h>
struct SinhVien{
	char fullName[50];
	int age;
	char phoneNumber[20];
};
int main(){
	struct SinhVien sinhVien[5];
	for(int i=0; i<5; i++){
		printf("\nThong tin cua sinh vien %d: \n", i+1);
		printf("Ban hay nhap ten cua sinh vien: ");
		fgets(sinhVien[i].fullName, sizeof(sinhVien[i].fullName), stdin);
		printf("Ban hay nhap tuoi cua sinh vien: ");
		scanf("%d", &sinhVien[i].age);
		fflush(stdin);
		printf("Hay nhap so dien thoai cua sinh vien: ");
		fgets(sinhVien[i].phoneNumber, sizeof(sinhVien[i].phoneNumber), stdin);
	};
	for(int i=0; i<5; i++){
		printf("\nSinh vien %d \n", i+1);
		printf("Ho va ten day du cua sinh vien: %s", sinhVien[i].fullName);
		printf("Tuoi cua sinh vien: %d\n", sinhVien[i].age);
		printf("So dien thoai cua sinh vien: %s", sinhVien[i].phoneNumber);
	}
	return 0;
}
