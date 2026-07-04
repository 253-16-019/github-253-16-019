#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter A Number:");
    scanf("%d",&n);
    int arr[10000];
    int p=0;
    int isprime;
    for(int i=2;p<n;i++){
        isprime=1;
        int k=sqrt(i);
        for(int j=2;j<=k;j++){
            if(i%j==0){
                isprime=0;
                break;
            }
        }
        if(isprime==1){
            arr[p]=i;
            p++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}