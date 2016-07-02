#include <stdio.h>

int main(){
    int a=3;
    int b=2;
    printf("Hello World,I'm %d years old.\n",max(a,b));
    return 0;
}

int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
