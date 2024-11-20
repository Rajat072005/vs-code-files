
#include<stdio.h>

int main(){
    int n;
    printf("enter number of rows : \n");
    scanf("%d", &n);

    for(int i = 1 ; i<=n;i++){
        //spaces
        for(int space = 1 ; space<=n-i;space++){
            printf(" ");
        }
        //number till half pyramid
        int k = i ;
        for(int j = i; j<=2*i-1;j++){
            printf("%d" , k);
            k++;
        }
        k
        //numbers for other half
        for(int j ;j<i;j++){
            printf("%d" , )
        }

        

        

    }
}