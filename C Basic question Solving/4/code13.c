#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);
    if(a==0){
        printf(" a can't be zero in quadratic eqation");
        return 1;
    }
    double d,r1,r2,x,y; // descriminent,root1,root2,real_part,imaginary_part;
    d= b*b-4*a*c;
    if(d>0){
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("roots are real and differnt");
        printf("root 1 is %.1lf\n",r1);
        printf("root 2 is %.1lf",r2);
    }
    else if(d==0){
        r1=-b/2*a;
        printf("Both root are same");
        printf("%.1lf",r1);
    }
    else{
        x=-b/2*a;
        y=sqrt(d)/2*a;
        printf("roots are comples root\n");
        printf("r1=%.1lf+%.1lfi \n r2=%.1lf-%lfi",x,y,x,y);
    }
    return 0;
}