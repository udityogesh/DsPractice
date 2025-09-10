#include<stdio.h>
int  main(){
    int array[5][4] = {{0,1,0,0},
                       {0,0,0,0},
                      {0,5,0,2},
                      {9,0,0,6},
                      {7,0,0,0}};
    int tripleMatrix[6][3];
     int k = 0 ;
    for(int i = 0;i<=4;i++){
        for(int j = 0;j<=3;j++){
            if(array[i][j] != 0){
                tripleMatrix[k][0] =i;
                tripleMatrix[k][1] =j;
                tripleMatrix[k][2] =array[i][j];
                k=k+1;
            }

        }
    }
    for(int i = 0;i<=4;i++){
        for(int j = 0;j<=3;j++){
            printf("%d  ",array[i][j]);
        }
        printf("\n");
    } 
    printf("\n");

    for(int i  =0 ; i <=5;i++){
        for(int j = 0 ; j <=2 ;j++){
            printf("%d  ",tripleMatrix[i][j]);
        }
        printf("\n");
    }
}