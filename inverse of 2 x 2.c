#include <stdio.h>

int main(){

float a[2][2],adj[2][2],inv[2][2],det;

   for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("Enter your a_%d_%d: ",i+1,j+1);  // The elements in the matrix are counted from a_1_1
        scanf("%f",&a[i][j]);
}
}

//Calculating determinant
det=a[0][0]*a[1][1] - a[1][0]*a[0][1];

// calculating adjoint of  2x2

adj[0][0]=a[1][1];
adj[0][1]=-a[0][1];
adj[1][0]=-a[1][0];
adj[1][1]=a[0][0];

for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        inv[i][j]=1/det*adj[i][j];

}
}


if (det!=0){
        printf("The inverse of the given matrix is: \n");

for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%.3f   ",inv[i][j]);

}
printf("\n");

}
}
else
printf("Inverse doesn't exist");
return 0;
}
