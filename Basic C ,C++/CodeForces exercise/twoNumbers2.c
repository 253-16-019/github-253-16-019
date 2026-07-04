#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    float div=(float)a/b;

    int x=(int)floor(div);
    int y=(int)ceil(div);
    int z=(int)round(div);

    printf("%d",x);
    printf("%d",y);
    printf("%d",z);
    return 0;
}