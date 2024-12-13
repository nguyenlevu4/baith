#include <stdio.h>

int main(){
    float luongcoban, sogiolam, luongtheogio, phucap, tongluong;
    
    printf("nhập số giờ làm: ");
    scanf("%f", &sogiolam);
    printf("số tiền mỗi theo mỗi giogio làm; ");
    scanf("%f", &luongtheogio);
    
    luongcoban = sogiolam * luongtheogio; //tính lương cơ bản nhận được theo mỗi giờ làm
    
    if(sogiolam > 160){ //đặt điều kiện trên 160 gio thì
        phucap = luongcoban * 0.1; //lương tăng lên 10% bằng cách nhân 0.1 
    }else {
        phucap = 0;
    }
    printf("lương cở bản: %.2f\n", luongcoban); //in luong cơ bản dựa trên số giờ làm vs tiền lương mỗi giờ làm việc
    printf("lương phụ cấp nhận được: %.2f\n", phucap); //in số tiền phụ sẻ nhận được khi làm trên 160gi160gio
    printf("tổng lương bao gồm cả phụ cấp: %.2f", luongcoban + phucap); //in tong lương dựa trên lương cơ bản và tiền phụ cấpcấp
    
    return 0;
}