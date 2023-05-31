#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int i=0, r;
    while(n>0){
        r=n%10;
        n=n/10;
        if(r>i){
            i=r;
        }
    }
    printf("%d", i);
}