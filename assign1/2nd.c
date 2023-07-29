# include <stdio.h>
void main(){
    int p =65;
    for(int i=1;i<=4;i++){
        for(int k=3;k>=i;k--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%c ",p);
        }
        printf("\n");
        ++p;
    }
}
