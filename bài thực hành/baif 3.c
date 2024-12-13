#include<stdio.h>
int main() {
	int  bieu_thuc;
	float sotien,tyso ;
	double USD_to_VND = 23500,
	       EUR_to_VND = 25000,
	       GDB_to_VND = 28000,
	       JBY_to_VND = 180;
	printf("==============CHUONG TRINH CHUYEN DOI TIEN TE=============\n");
	printf("1. USD to VND\n");
	printf("2. EUR to VND\n");
	printf("3. GBP to VND\n");
	printf("4. JPY to VND\n");
	printf("5. VND to USD\n");
	printf("6. VND to EUR\n");
	printf ("7. VND to GBP\n");
	printf ("8. VND to JPY\n");
	printf ("Hay chon don vi chuyen doi (1-8): ");
	scanf("%d",&bieu_thuc);
	printf("nhap vao so tien can chuyen doi: ");
	scanf("%f",&tyso);
	switch (bieu_thuc ) {
	case 1:
		sotien= tyso * USD_to_VND;
		printf("%.2f USD = %.2f vnd", tyso, sotien );
		break;
	case 2:
		sotien = tyso * EUR_to_VND;
		printf("%.2f eur = %.2f vnd", tyso, sotien );
		break;
	case 3:
		sotien = tyso * GDB_to_VND;
		printf("%.2f gbd = %.2f vnd", tyso, sotien );
		break;
	case 4:
		sotien = tyso * JBY_to_VND;
		printf("%.2f jby = %.2f vnd", tyso, sotien );
		break;
	case 5:
		sotien = tyso / USD_to_VND ;
		printf(" %.2f vnd = %.2f UDS", tyso, sotien );
		break;
	case 6:
		sotien = tyso / EUR_to_VND ;
		printf(" %.2f vnd = %.2f eur", tyso, sotien );
		break;
	case 7:
		sotien = tyso / GDB_to_VND ;
		printf(" %.2f vnd = %.2f gbp", tyso, sotien );
		break;
	case 8:
		sotien = tyso / JBY_to_VND ;
		printf(" %.2f vnd = %.2f jby", tyso, sotien );
		break;
	default:
		printf ("Lua chon ko hop le! Yeu cai nhap lai ");
		break;
	}
	return 0;
}


