# include <stdio.h>
void main(){
    int c=1;
    for (int i=1;i<=4;i++){
        for(int j=3;j>=i;j--){
            printf(" ");
        }
        for (int k = 1; k<= i; k++)
        {
            printf("%d ",c++);
        }
        printf("\n"); 
    }
}