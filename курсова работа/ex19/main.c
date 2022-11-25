

#include <stdio.h>
#include <stdlib.h>


int main()
{
    //19.Да се напише програма, която разменя местата на редовете, съдържащи
//        най-големия и най-малкия елемент в масив с n реда и m стълба.

    int n,m;
    printf("How many rows: ");
    scanf("%d",&n);
    printf("How many columns: ");
    scanf("%d",&m);
    int matrix[n][m];

    //create matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("num[%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    puts("\n");


    int min,max,minNumLine,maxNumLine;

    max = matrix[0][0];
    min = matrix[0][0];
    //finding the maximum and minimum element and their rows and printing the matrix
    for(int i = 0; i< n; i++){
        for(int j = 0; j < m; j++){
            if(max < matrix[i][j]){
                max = matrix[i][j];
                maxNumLine = i;
            }
            if(min > matrix[i][j]){
                min = matrix[i][j];
                minNumLine = i;
            }
            printf("%d ",matrix[i][j]);
        }
        puts("\n");
    }
    printf("max = %d  min = %d", max, min);
    puts("\n");
    printf("max num line = %d  min num line = %d", maxNumLine, minNumLine);

    int maxArr[m];
    int minArr[m];


    //filling the arrays
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == maxNumLine){
                maxArr[j] = matrix[i][j];
            }
            if(i == minNumLine){
                minArr[j] = matrix[i][j];
            }
        }
    }

    //exchange the rows
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if( i == maxNumLine){
                matrix[i][j] = minArr[j];
            }

            if( i == minNumLine){
                matrix[i][j] = maxArr[j];
            }
        }
    }

    //printing the reverse matrix
    for(int i = 0; i < n; i++){
        puts("\n");
        for(int j = 0; j < m; j++){
            printf("%d ", matrix[i][j]);
        }
    }

    return 0;
}