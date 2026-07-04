int main(){
    int x,y;
    printf("Enter two number: ");
    scanf("%d %d",&x,&y);
    if(x>y) printf("%d is maximum",x);
    else if(x<y) printf("%d is maximum",y);
    else if(x=y) printf("the number is equal");
    return 0;
}