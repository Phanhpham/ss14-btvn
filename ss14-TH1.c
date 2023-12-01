#include<stdio.h>
// ham su dung con tro de hoan doi giatri cua hai bien 
void hoanDoi(int*a,int*b){
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main (){
    int x,y;

    // nhap gia tri cho hai bien 
    printf("nhap gia tri cho bien x:");
    scanf("%d",&x);
    printf("nhap gia tri cho bien y:");
    scanf("%d",&y);

    // hien thi gia tri truoc khi hoan doi
    printf("gia tri khi hoan dôi:x = %d,y = %d\n",x,y);

    //goi ham de hoá đổi giá trị
    hoanDoi(&x,&y);

    //hien thi gia tri sau khi hoan doi 
    printf("gia tri sau hi hoan doi:x = %d,y = %d\n",x,y);

    return 0;
    
}