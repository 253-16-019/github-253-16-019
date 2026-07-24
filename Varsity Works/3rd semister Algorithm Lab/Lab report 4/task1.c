#include<stdio.h>
int main(){
    int n, i, j;
    printf("Enter number of students: ");
    scanf("%d", &n);
    int id[n];
    int scr[n];
    int tempScore, tempID;
    printf("Enter Student ID and Score:\n");
    for(i=0;i<n;i++){
        scanf("%d %d",&id[i],&scr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(scr[j]<scr[j+1]){
                tempScore=scr[j];
                scr[j]=scr[j+1];
                scr[j+1]=tempScore;
                
                tempID=id[j];
                id[j]=id[j+1];
                id[j+1]=tempID;
            }
        }
    }
    printf("\nRank\tStudent ID\tScore\n");
    for(i=0;i<n;i++){
        printf("%d\t%d\t\t%d\n",i + 1,id[i],scr[i]);
    }
    return 0;
}