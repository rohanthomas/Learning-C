#include <stdio.h>

int main(){
    int rows, col;

    printf("Enter your # rows: ");
    scanf("%d",&rows);

    printf("Enter your # columns: ");
    scanf("%d",&col);

   int a[rows][col],b[rows][col],sum[rows][col],diff[rows][col];

   for(int i=0;i<rows;i++){
    for(int j=0;j<col;j++){
        printf("Enter your a_%d_%d: ",i+1,j+1);  // The elements in the matrix are counted from a_1_1
        scanf("%d",&a[i][j]);
}
}

  for(int i=0;i<rows;i++){
    for(int j=0;j<col;j++){
        printf("Enter your b_%d_%d: ",i+1,j+1);
        scanf("%d",&b[i][j]);
}
}

 for(int i=0;i<rows;i++){
    for(int j=0;j<col;j++){
        sum[i][j]=a[i][j] + b[i][j];
}
}

for(int i=0;i<rows;i++){
    for(int j=0;j<col;j++){
        diff[i][j]=a[i][j] - b[i][j];
}
}


printf("The sum of matrices is \n");
for(int i=0;i<rows;i++){
    for(int j=0;j<col;j++){
        printf("%d  ",sum[i][j]);
}
        printf("\n");
}

printf("The difference of matrices is \n");
for(int i=0;i<rows;i++){
    for(int j=0;j<col;j++){
        printf("%d  ",diff[i][j]);
}
        printf("\n");
}




return 0;
}

