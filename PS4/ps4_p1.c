//19pd29
//SaiKrishna
#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>

void num_input(int *num, const char *msg){
    printf(msg);
    scanf("%d", num);
}

void print_arr(int * arr, int n){
    for(int i =0;i<n;i++){
        printf(";%d ",arr[i]);
    }
    printf("\n");
}

void arr_input(int *arr, int n){
    for (int i =0;i<n;i++){
        printf("Element %d : ",i);
        scanf("%d",arr+i);
    }
}

void print_arr_2d(int m, int n, int arr[m][n]){
    for (int i =0;i<mi++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void arr_input_2d(int m, int n, int arr[m][n]){
    for (int i =0;i<m;i++)
        for(int j=0;j<n;j++){
        printf(";Element %d,%d : ";,i,j);
        scanf("%d",&arr[i][j]);
    }
}



int main(){
    int n = 3;
    int start[]={10,12,20};
    int finish[]={20,25,30};
    int activities[n]={-1};
    print_arr(activities,n)
}

