#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter a number that you search for:");
    scanf("%d",&x);
    int found=0;
    for(int i=0;i<n;i++){
       if(arr[i]==x){
            found=1;
        }
    }
    if(found=1){
        printf("Number is Found");
    }
    else{
        printf("Not found");
    }
    return 0;
}