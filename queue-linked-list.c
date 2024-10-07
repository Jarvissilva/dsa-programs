#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int id;
  struct Node* next;
} Node;

typedef struct Queue {
  struct Node* front;
  struct Node* rear;
} Queue;

struct Queue* create_queue(){
  struct Queue* q = (struct Queue*) malloc(sizeof(struct Queue));
  q->front=NULL;
  q->rear=NULL;
  return q;
}

struct Node* create_node(int id){
  struct Node* node = (struct Node*) malloc(sizeof(struct Node));
  node->id=id;
  node->next=NULL;
  return node;
}

void enqueue(int id, struct Queue *queue){
  struct Node *node = create_node(id);
  
  if(queue->front == NULL){
    queue->front = node;
    queue->rear = node;
  }  
  else{
    queue->rear->next=node;
    queue->rear = node;
  }
}

void dequeue(struct Queue *queue){
  queue->front=queue->front->next;
}


int main() {

  struct Queue *queue = create_queue();
  
  enqueue(3,queue);
  enqueue(4,queue);
  enqueue(5,queue);
  
  //Node *temp = queue->front;
  //while(temp != NULL){
   // printf("You have the following incoming call id: %d \n",temp->id);
   // temp=temp->next;
 // }
 // while(queue->front != NULL){
   // printf("Attend the call id: %d \n",queue->front->id);
 //   dequeue(queue);
   // queue->front=queue->front->next;
  //}
  
  int is_quit = 0;
  while(is_quit == 0){
    printf("Welcome to call center management what would you like to do: \n");
    printf("1: Process incoming call\n");
    printf("2: Enqueue a call\n");
    printf("3: Display incoming calls queue\n");
    printf("4: Quit\n");
    
    int option;
    scanf("%d",&option);
    
    switch(option){
      case 1:
        if(queue->front==NULL){
            printf("No incoming calls");  
        }
        else{

          printf("Processing incoming call id %d\n",queue->front->id);
          printf("If done would you like to dequeue it:\n");
          printf("1: Yes\n");
          printf("2: No\n");
          int dequeue_it;
          scanf("%d",&dequeue_it);
          
          if(dequeue_it == 1){
           dequeue(queue);
          }
        }
          break;
      case 3:
          if(queue->front==NULL){
            printf("No incoming calls ");  
          }
          else{
            Node *temp = queue->front;
            while(temp != NULL){
             printf("You have incoming call with id: %d \n",temp->id);
             temp=temp->next;
            }
        }
        break;
      case 4:
        is_quit=1;
        break;
      case 2:
        int call_id;
        printf("Enter call id: ");
        scanf("%d",&call_id);
        Node *temp = queue->front;
        while(temp != NULL){
          if(temp->id == call_id){
            printf("The call id is already present");
          }
          else{
            enqueue(call_id,queue);
            break;
          }
          temp=temp->next;
        }  
        break;
    }
  }
  

  return 0;
}
