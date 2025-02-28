#include <stdio.h>
void vonglap(){
    int a;
    for(a = 0; a<5; a++){
        printf("i= %d\r\n", a);
    }
    printf("2025");
}

void lap(){
    printf("Nhap vao so:");
    int b;
    scanf("%d",&b);
    for(int i=0; i<b; i++){
        printf("i = %d\r\n",i);
    }
    
}
//
void chan(){
    int a;
    printf("Vui long nhap so:");
    scanf("%d",&a);
    for(int i = 100; i>a; i--){
        if(i%2 ==0){
            printf("%d\n",i);
    
        }
        }
        printf("ket thuc");
    }

// viết hàm chuyền tham số:
void truyenthamso(int n){
    for(int i = 0; i<n; i++
    ){
        if(i%2 == 0){
            printf("%d\r\n",i);
        }
        else{
            printf("invalid\r\n");
        }
    }
}

//
void new(){

}
    


int main(){
    // int m;
    // printf("nhap so: \r\n");
    // scanf("%d",&m);
    // truyenthamso(m);
    return 0;
}