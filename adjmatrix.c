#include<stdio.h>
int main(){

    int num_vertices, init, terminal;
    printf("Enter the number of vertices: ");
    scanf("%d",&num_vertices);

    int adj[num_vertices][num_vertices];


// Intializing  a zero Matrix

    for(int i=0; i<num_vertices; i++){
        for(int j=0; j<num_vertices; j++){
            adj[i][j] = 0;
        }
    }

// Inputting the edges

while(init != -1 && terminal != -1){
    printf("Enter intial and terminal vertices of the edge: ");
    scanf("%d %d",&init, &terminal);
    adj[init][terminal] = 1;
    adj[terminal][init] = 1;  //Adjacency Matrices are symmetric
}


// Printing the Adjacency Matrix
for(int i=0; i<num_vertices; i++){
        for(int j=0; j<num_vertices; j++){
            printf("%d ",adj[i][j]);
        }
        printf("\n");
    }



    return 0;
}
