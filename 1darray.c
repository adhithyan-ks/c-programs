#include<stdio.h>

int main() {
    int i;
    char *candidate[6]={"NOTA","Abhinav","Ajay","Sooraj","Babil","John"};
    printf("Candidate List:\n");
    for(i=1;i<=5;i++) {
        printf("%d. %s\n",i,candidate[i]);
    }
}