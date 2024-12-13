#include <stdio.h>

int main(){
    int n;
    printf("Hay nhap gia tri nguyen duong: ");
    scanf("%d", &n);
  
    for (int i=1; i<=n;i++){
        if(n%i==0){
            printf("%d la uoc cua %d\n", i, n);
        }
    }
    return 0;
}