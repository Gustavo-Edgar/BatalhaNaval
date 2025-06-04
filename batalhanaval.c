#include<stdio.h>

int main(){
    int Tabuleiro[10][10],i=0,j=0;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            Tabuleiro[i][j] = 0;
        }
    }

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(i==1 && j>2 && j<6){
                if (Tabuleiro[i][j] == 0)
                {
                    Tabuleiro[i][j] = 3;
                } 
            }
            if(j==7 && i<8 && i>4){
                if (Tabuleiro[i][j] == 0)
                {
                    Tabuleiro[i][j] = 3;
                }
            }
            
            if(i==j && i>1 && i<5){
                if (Tabuleiro[i][j] == 0)
                {
                    Tabuleiro[i][j] = 3;
                }
            }

            if((j+i) == 9 && j<9 && j>5){
                if (Tabuleiro[i][j] == 0)
                {
                    Tabuleiro[i][j] = 3;
                }
            }

        }
    }

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("%d ",Tabuleiro[i][j]);
        }
        printf("\n");
    }
}
