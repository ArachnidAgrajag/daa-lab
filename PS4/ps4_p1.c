//19pd29
//SaiKrishna
#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>

void num_input(int *num, const char *msg){
    printf("%s",msg);
    scanf("%d", num);
}

void print_arr(int * arr, int n){
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
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
    for (int i =0;i<m;i++){
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
        printf("Element %d,%d : ",i,j);
        scanf("%d",&arr[i][j]);
    }
}

void merge(int  *arr, int q, int r,int * finish){
    int m =0,n=q,k=0;
    int L[q], R[r-q];
    int Lf[q], Rf[r-q];
    for (int i = 0; i < r ; i++){
        if(i<q){
            L[i] = arr[i];
            Lf[i]= finish[i];
        }
        else{
            R[i-q] = arr[i];
            Rf[i-q] = finish[i];
        }
    }

    while (m < q && n < r){
        if (L[m] <= R[n-q] )  {
            arr[k] = L[m];
            finish[k]=Lf[m];
            m++;
        }
        else{
            arr[k] = R[n-q];
            finish[k]=Rf[n-q];
            n++;
        }
        k++;
    }

    while (m < q){
        arr[k] = L[m];
        finish[k]=Lf[m];
        m++;
        k++;
    }

    while (n < r){
        arr[k] = R[n-q];
        finish[k]=Rf[n-q];
        n++;
        k++;
    }
}

void merge_sort(int *arr, int n,int * finish){
    if(n>=2){
        merge_sort(arr,n/2,finish);
        merge_sort(arr+n/2,n-n/2,finish+n/2);
        merge(arr,n/2,n,finish);
    }

}

int get_activities(int n,int start[n],int finish[n],int activities[n]){
    merge_sort(start,n,finish);
    for(int i =0;i<n;i++){
        if(start[i+1]<=finish[i])
    }
}

int main(){
    int n = 3;
    int start[]={3,2,1};
    int finish[]={4,5,6};
    //int activities[n]={-1};
    merge_sort(start,n,finish);
    print_arr(start,n);
    print_arr(finish,n);
}




