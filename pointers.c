//An Algorithm for perform Insertion sort
#include<stdio.h>

int main(){
    int n,j,check;
    int arr[6]={7,6,5,4,3,2};

    for(int i=1; i<6;i++){
        check=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>check){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=check;

    }
   

    for(int i=0;i<6;i++){
        printf("%d  ",arr[i]);
    }

    return 0;
}