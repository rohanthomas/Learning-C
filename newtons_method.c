#include<stdio.h>

float function(float x){
    return x*x -612;       //Change the function here
}

float derivative(float x){
    return 2*x;            // Change it's derivative here
}

int main(){
  float x1=10;  //Trial guess
  float xn;

  for(int i=1; i<20;i++){
    xn=x1-(function(x1)/derivative(x1));
    x1=xn;
    printf("x%d= %.12f\n",i,x1);

    if(function(x1)==0){
      break;
    }
  }

  return 0;
}

// A more automated and interesting code is on progress.