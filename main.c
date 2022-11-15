#include<stdio.h>
void main() {
    int exam_score[3][4]={{70 ,80,90 ,72},{82,92 ,71 ,81},{91,67,78 ,98}};
    for(int row=0; row<3; row++)
    {
        for(int column=0; column<4; column++){
            exam_score[row][column]= exam_score[row][column]+1;
            printf("[%d][%d] = %d\n",
                   row,column,exam_score[row][column]);

        }
    }