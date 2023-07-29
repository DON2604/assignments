# include <stdio.h>
void main(){
    int c=0;
    for (int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            c++;
            if(c%2==0)
            printf("#");
            else
            printf("*");
        }
        printf("\n");
    }
}