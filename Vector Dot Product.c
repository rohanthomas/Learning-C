#include<stdio.h>
int main(){
    int vec1[3],vec2[3],dotp=0;

    for(int i=0; i<3;i++){
        printf("Enter your x_%d for the vector <x_1,x_2,x_3>\n",i+1);
        scanf("%d",&vec1[i]);
    }


    for(int i=0; i<3;i++){
        printf("Enter your y_%d for the vector <y_1,y_2,y_3>\n",i+1);
        scanf("%d",&vec2[i]);
    }

    for(int i=0;i<3;i++){
        dotp+=vec1[i]*vec2[i];

    }

    printf("The dot product between the vectors is %d",dotp);

    return 0;
}
