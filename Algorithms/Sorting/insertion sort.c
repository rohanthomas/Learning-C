#include<stdio.h>

int main(){
    int n,j,check;

    printf("Enter your number of elements: ");
    scanf("%d",&n);

    int arr[n];


    //Inputting an array of elements from the user.
    printf("Enter your list: ");
    printf("\n");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    // Performing insertion sort.

    for(int i=1;i<n;i++){
        check=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>check){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=check;
    }

    //Inputting an array of elements from the user.    

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}