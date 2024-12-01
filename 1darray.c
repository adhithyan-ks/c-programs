#include<stdio.h>

int main() {
    int i,option,vote,count[6]={0,0,0,0,0,0};
    char *candidate[6]={"NOTA","Abhinav","Ajay","Sooraj","Babil","John"};
    printf("Candidate List:\n");
    for(i=1;i<=5;i++) {
        printf("%d. %s\n",i,candidate[i]);
    }
    do {
        printf("Enter your vote:");
        scanf("%d",&vote);
        if(vote >=1 && vote <= 5) {
            count[vote]++;
        } else {
            count[0]++;
        }
        printf("Is there any more voters?(0/1):");
        scanf("%d",&option);
    } while(option==1);
    printf("\nResults:\n");
    for(i=0;i<6;i++) {
        printf("%3d %-20s %3d\n",i,candidate[i],count[i]);
    }
    return 0;
}