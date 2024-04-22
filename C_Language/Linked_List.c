#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* insert_at_start(struct Node* head, int a)
{
    struct Node* ptr= (struct Node*)malloc(sizeof(struct Node));
    ptr->data = a;//assigning
    ptr->next = head;//1st step
    
    return ptr;//second step
}

  struct Node* insert_at_end(struct Node* q,int a)
{
struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
struct Node* p= (struct Node*) malloc(sizeof(struct Node));
p = q;
ptr->data= a;
while(q->next != NULL)
{
    q = q->next;
}
q->next = ptr;
ptr->next = NULL;
return p;

}

struct Node* at_index(struct Node* q, int a, int index)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node* p = (struct Node*) malloc(sizeof(struct Node)); ;
    p = q;
    ptr->data= a;
    int i = 0;
    
    while(i != index-1)
    {
        p= p-> next;
       i++;
    }
    ptr->next = p->next;
    p->next = ptr;

    return q;
    }
    
    struct Node* insert_after_node(struct Node* head,struct Node* previousNode,int a)
   {
     struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
     ptr->data= a;
      struct Node* p = (struct Node*) malloc(sizeof(struct Node)); ;
     p = head;

      while(p->next != previousNode)
      {
       p= p->next;
      }
      ptr->next = p->next;
      p->next = ptr;
       return head;
    }
    

struct Node* deletion_at_beginning(struct Node* a)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
     ptr = a;
     a = a->next ;
     free(ptr);
     return a;
}
struct Node* deletion_at_index(struct Node* r, int index)
{
    struct Node* q = (struct Node*)malloc(sizeof(struct Node));
    struct Node* a = (struct Node*)malloc(sizeof(struct Node));
    
    int i = 0;
    q= r;
     while(i< index-1)
     { 
        r= r-> next;
        i++;
     }
     a= r->next;
     r->next = a->next;
     free(a);
     return q;




}

struct Node* deletion_at_end(struct Node* r)
{
    
    struct Node* a= (struct Node*)malloc (sizeof(struct Node));
    struct Node* b= (struct Node*)malloc (sizeof(struct Node));
    a= r;
    b= a->next;
    while(b!=NULL)
    {
        b= b->next;
        a=a->next;
    }
    a->next = NULL;
    free(b);
    return r;
}


//struct Node* deletion_at_index( struct Node* q,int a )
//{
// struct Node* r= (struct Node*)malloc (sizeof(struct Node));
// struct Node* b= (struct Node*)malloc (sizeof(struct Node));
//  b= q;
// r= b->next;
 //int i = 0;
//// while(i<a-1)
 //{
 //   b= b->next;
 //   r=r->next;
  //  i++;
 //}
 //b->next = r->next;
 //r->next= NULL;
// free(r);
 //return (q);
//}



struct Node* deletion_after_a_node(struct Node*q, int value)//previous node is given
{
    struct Node* r= (struct Node*)malloc (sizeof(struct Node));
 struct Node* b= (struct Node*)malloc (sizeof(struct Node));
  b= q;
   
  while(b->data != value)
  {
    b= b->next;

  }
  r= b->next;
  b->next= r->next;
 r->next= NULL;
 free(r);
 return q;
}




void Print(struct Node* q)//head has been send here 
{
    while(q != NULL)
    {
        printf("%d\n",q->data);
        q= q->next;

    }
}

int main()
{
    struct Node* head;
    struct Node*  first;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    head=(struct Node*)malloc(sizeof(struct Node));
    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
   head-> data= 22;
   head->next= second;
   second->data = 11;
   second->next = third;
   third->data = 00;
   third->next = fourth;
   fourth->data = 232;
   fourth->next = NULL;

    //insertionwala part

   Print(head);// head is send here and is passes directly as it is a pointer
   //head= insert_at_start(head , 44);
  //Print(head);
 // head = insert_at_end(head, 69);
 // Print(head);
//  head = at_index(head,96,1);
 // Print(head);
//  head = insert_after_node(head,second,11111);
// Print(head);

 //deletion wala part

///head = deletion_at_beginning(head);
///Print(head);
//head = deletion_at_index(head, 2);
//Print(head);
//head = deletion_at_end(head);
//Print(head);
//head = deletion_at_index(head, 2);
//Print(head);
head = deletion_after_a_node(head,00);
Print(head);

}
