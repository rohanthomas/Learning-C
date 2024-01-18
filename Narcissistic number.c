#include<stdio.h>
int main(){

int n=153,sum=0,r,count=0,prod=1,check;
check=n;

while (n!=0) {
    r=n%10;
    count=count+1;
    n=n/10;


}

n=check;

while (n!=0) {
    prod=1;
    r=n%10;
    for(int i=1;i<=count;i++){
            prod=prod*r;
    }

    sum=sum+prod;
    n=n/10;
}

if(sum==check){
    printf("yes, %d an amstrong number",check);
}
else
    printf("not an amstrong number");
return 0;
}
