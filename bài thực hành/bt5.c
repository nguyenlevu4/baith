#include <stdio.h>
#include <math.h>

int main () {
	int a,b;
	printf("Nhap mot so nguyen duong: ");
	scanf("%d",&a);
	if (a<=1) {
		printf("%d khong phai so nguyen to", a);
		return 0;
	} else {
		for (b=2; b<=sqrt(a); b++){
			if (a%b==0) {
				printf("%d khong phai so nguyen to", a);
				return 0;
			}
		}
		printf("%d la so nguyen to", a);
	}
}