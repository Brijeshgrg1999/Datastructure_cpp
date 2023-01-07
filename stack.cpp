//code written here is is c although the extension is cpp 


#include <stdlib.h>
#include <stdio.h>
#define MAX_SIZE 101  //defining constant in c with a value ; 


//we can implement using array 

int A[MAX_SIZE];
int top = -1 ;



void push(int x ) {
    if(top == MAX_SIZE -1){
        printf("overflow");
        return ; 
    }
    A[++top] = x ; 
}

void pop(){
    if(top == -1) {
        printf("ERROR: no element to pop\n");
        return; 
    }
    top--; 
}

int Top(){
    return A[top] ; 
}
 
void print(){
    int i ;
    printf("stacks:");
    for(i = 0 ; i <=top ; i++){
        printf("%d" , A[i]);
    }
    printf("\n");
}

int main(){

push(2);
push(5);
push(7);
print();
pop();
push(9);
print();

return 0 ; 

};