#include <stdio.h>
int main(){
    int a,b;
    scanf("%a %b",&a,&b);
    if (a>=18){
        if (b==1){
            printf("Eligible");
        }
        else
        printf("Not Eligible");
    }
    else printf("Not Eligible");
    retutrn 0;
}