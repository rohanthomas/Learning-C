#include<stdio.h>
int main(){
int n,check;
printf("Enter the length of the array: ");
scanf("%d",&n);
int arr[n];
printf("Enter your elements: \n");
for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("Enter the number to check: ");
scanf("%d",&check);

for(int i=0;i<n;i++){
    if(arr[i]==check){
        return printf("Found");
    }
}
printf("Not found");

    return 0;
}

