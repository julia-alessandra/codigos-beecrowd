#include <stdio.h>
int main(){
    int p, j1, j2, r, a, jt;

    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);

    /*soma dos numeros e descobrir se é par ou impar*/
    jt=(j1+j2)%2;

    if(r==1 && a==0 || r==0 && a==1)
            printf("Jogador 1 ganha!\n");
    
    else if(r==1 && a==1)
        printf("Jogador 2 ganha!\n");
    
    else if(r==0 && a==0)
        if (jt==0 && p==1) 
            printf("Jogador 1 ganha!\n");

        else if(jt==0 && p==0)
            printf("Jogador 2 ganha!\n");
        
        else if(jt==1 && p==0)   
            printf("Jogador 1 ganha!\n");

        else if(jt==1 && p==1)
            printf("Jogador 2 ganha!\n");

    return 0;

}