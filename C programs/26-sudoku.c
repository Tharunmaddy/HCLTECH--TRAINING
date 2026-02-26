// Pass a 9x9 integer array to a function that checks if each row and column contains unique numbers from 1 to 9.
#include<stdio.h>
int sudoku(int arr[9][9]);
int main()
{
    int arr [9][9] = {
        {5,3,4,6,7,8,9,1,2},
        {6,7,2,1,9,5,3,4,8},
        {1,9,8,3,4,2,5,6,7},
        {8,5,9,7,6,1,4,2,3},
        {4,2,6,8,5,3,7,9,1},
        {7,1,3,9,2,4,8,5,6},
        {9,6,1,5,3,7,2,8,4},
        {2,8,7,4,1,9,6,3,5},
        {3,4,5,2,8,6,1,7,9}
    };
    if(sudoku(arr))
    printf("True\n");
    else
    printf("False");
}
int sudoku(int arr[9][9])
{
    for(int i=0;i<9;i++)
    {
        int found[10]={0};
        for(int j=0;j<9;j++)
        {
            int n=arr[i][j];
            if(n<1 ||n>9 ||found[n])
            return 0;
            found[n]=1;
        }
    }
    for(int i=0;i<9;i++)
    {
        int found[10]={0};
        for(int j=0;j<9;j++)
        {
            int n=arr[j][i];
            if(n<1 ||n>9 ||found[n])
            return 0;
            found[n]=1;
        }
    }
    return 1;
}