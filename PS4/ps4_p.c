//19pd29
//SaiKrishna
#inlcude<stdio.h>
#include<stdint.h>
#include<stdbool.h>

void num_input(int *num, const char *msg){
    printf(msg);
    scanf("%d", num);
}

void print_arr(int * arr, int n){
    for(int i =0;i&lt;n;i++){
        printf(";%d ",arr[i]);
    }
    printf("\n");
}

void arr_input(int *arr, int n){
    for (int i =0;i&lt;n;i++){
        printf("Element %d : ",i);
        scanf("%d",arr+i);
    }
}

void print_arr_2d(int m, int n, int arr[m][n]){
    for (int i =0;i&lt;m;i++){
        for(int j=0;j&lt;n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void arr_input_2d(int m, int n, int arr[m][n]){
    for (int i =0;i&lt;m;i++)
        for(int j=0;j&lt;n;j++){
        printf(";Element %d,%d : ";,i,j);
        scanf("%d",&arr[i][j]);
    }
}

int main(){

}

