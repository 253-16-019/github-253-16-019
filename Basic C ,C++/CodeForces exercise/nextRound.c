#include<stdio.h>
int main(){
    int n,k,a[50];
    scanf("%d %d",&n,&k);
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int kth_score = a[k-1];

    for(int i=0;i<n;i++){
        if(a[i]>=kth_score && a[i]>0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}