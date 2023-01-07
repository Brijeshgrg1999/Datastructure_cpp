#include <stdlib.h>
#include <stdio.h>
#include <iostream>

 //sub header 
using namespace std; 

// create node  to store data and link 

struct Node {
    int data ; 
    struct Node *next; 
    struct Node* prev ; 
};

struct Node* head ;  // global variable - pointer to head 


struct Node* getNewNode(int x ){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->prev= NULL ; 
    temp->next = NULL ; 
    return temp ; 


}

void InsertHead(int x) 
{
    struct Node* newNode = getNewNode(x);
    if(head == NULL){
        head = newNode; //newNode is the pointer variable which is storing the addres of head now ; 
        return ; 
    }

    head->prev = newNode ;
    newNode->next = head; 
    head = newNode; 

}

void print() 
{
    struct Node* temp = head ;
    printf("forward:") ;
    while (temp!= NULL) 
    {
        printf("%d" , temp->data);
        temp = temp->next ; 
    }
    printf("\n") ; 
}

int main(){

InsertHead(2);
InsertHead(5);
InsertHead(2);
print();

return 0 ; 

};