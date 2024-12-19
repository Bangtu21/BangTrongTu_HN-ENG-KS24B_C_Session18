#include<stdio.h>
struct SinhVien{
	char fullName[50];
	int age;
	char phoneNumber[20];
};
int main(){
	struct SinhVien sinhVien01={"Bang Trong Tu", 19, "0943478560"};
	printf("Ho va ten sinh vien: %s\n", sinhVien01.fullName);
	printf("Tuoi cua sinh vien: %d\n", sinhVien01.age);
	printf("So dien thoai cua sinh vien: %s\n", sinhVien01.phoneNumber);
	return 0;
}
