#include <iostream>
#define N 5 

using namespace std; 
int queue[N];


// since queue is similar to list , therefore indicating the index of queue [ front and rear = -1 ] means empty queue list 

int front = -1 ;
int rear= -1 ;

// function for inserting the data into queue 

void enqueue(int x ) 
{
    if(front == -1 && rear == -1  )
    {
        front = rear = 0 ; 
        queue[rear] = x ;

    }
     else if(  ((rear+1)% N ) == front ) {     // this condition is for circular queue list  not a linear list . 
                cout << "it is full  now " ; 
     }
     else 
     {
        rear = (rear+1 )% N ; 
        queue[rear] = x ; 
     }
}

void dequeue(){
    if(front == -1 && rear == -1 ) {
        cout << " the queue list is already empty " ; 
    } else if( front == rear )  // if only one element is left in the queue 
    {
        front = rear = -1 ;  // this mean there will be no element in the queue list 
    }
    else {

        cout << " the front element that will be dequeued is : " << queue[front] << endl ; 
        front = (front + 1 )% N ; 
        
    }
}

void display()
{

int i = front ; 
    if(front == -1 && rear == -1  )  // this meanse no elements in queue 
    {
        cout<< "elements are full in queue"; 
    }
    else {
        cout<<"queue element are : " << endl ;
        while (i !=rear ){
            cout<< queue[i] << endl ; 
            i = (i+1 ) % N ; 
        }
        cout  << queue[i] <<endl ;
      
    }


}
// main program to run 

int main () {

enqueue(2);
enqueue(3);
enqueue(24);
enqueue(5);
display();
dequeue();
display(); 




    return 0; 
}