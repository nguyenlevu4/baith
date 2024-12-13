#include <stdio.h>

int main() {
	int a,b=2;
	printf("nhap so nguyen N: ");
	scanf("%d", &a);
	printf("%d so nguyen to cua ban: ", a);

	while(a) {
		int dem = 0;

		for(int i=2; i*i<=b; i++) {
			if(b % i == 0) {
				dem++;
				break;
			}
		}
		if(dem == 0) {
			printf("%d ", b);
			a--;
		}

		b++;
	}
}