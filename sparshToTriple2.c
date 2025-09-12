#include<stdio.h>
int  main(){
    int array[5][4] = {{0,1,0,0},
                       {0,0,0,0},
                      {0,5,0,2},
                      {9,0,0,6},
                      {7,0,0,0}};
    int k = 0 ;                  
    int tripleMatrix[3][6];
    
    for(int i = 0;i<=4;i++){
        for(int j = 0;j<=3;j++){
            if(array[i][j] != 0){
                tripleMatrix[0][k] =i;
                tripleMatrix[1][k] =j;
                tripleMatrix[2][k] =array[i][j];
                k=k+1;
            }

        }
    }
    for(int i = 0;i<=2;i++){
        for(int j = 0;j<=k;j++){
            printf("%d  ",array[i][j]);
        }
        printf("\n");
    } 
    printf("\n");

    for(int i  =0 ; i <=2;i++){
        for(int j = 0 ; j <=5 ;j++){
            printf("%d  ",tripleMatrix[i][j]);
        }
        printf("\n");
    }
}