#include <stdio.h>
int main(){
    int a1,a2;
    float f1,f2,f;
    printf("请输入4个数据:");
    scanf("%d,%d",&a1,&a2);
    scanf("%f,%f",&f1,&f2);
    printf("它们的和分别为: \n");
    printf("a1+a2=%d\n",a1+a2);
    f = f1+f2;
    printf("f1+f2=%.2f",f);
    return 0;
}