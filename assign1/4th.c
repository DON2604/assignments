# include <stdio.h>
# include <math.h>
void main(){
    int n=0;
    int s1 = 0;
    int a=0,b=1,s=0;
    printf("Enter a number:--");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        s=a+b;
        a=b;
        b=s;
        s1=s1+pow(s,2);
    }
    printf("%d",s1+1);
}