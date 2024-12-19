#include<stdio.h>
struct SinhVien{
	char fullName[50];
	int age;
	char phoneNumber[20];
};
int main(){
	struct SinhVien sinhVien01;
	printf("Ban hay nhap ho va ten day du: ");
	fgets(sinhVien01.fullName, sizeof(sinhVien01.fullName), stdin);
	printf("Hay nhap so tuoi cua ban: ");
	scanf("%d", &sinhVien01.age);
	fflush(stdin);
	printf("Ban hay nhap so dien thoai cua ban: ");
	fgets(sinhVien01.phoneNumber, sizeof(sinhVien01.phoneNumber), stdin);
	printf("Ho va ten: %s", sinhVien01.fullName);
	printf("Tuoi: %d\n", sinhVien01.age);
	printf("So dien thoai: %s\n", sinhVien01.phoneNumber);
	return 0;
}
