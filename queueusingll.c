#include<stdlib.h>
#include<stdio.h>
struct node{
            int data;
            struct node* link;
            };
struct node *front,*tail;
void insertion(int data1)
{
 struct node *newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 if(newnode==NULL)
  printf("\nNo Space");
 else
 {
  newnode->data=data1;
  if(tail==NULL||front==NULL)
  {
    newnode->link=NULL;
    front=newnode;
    tail=newnode;
   }
  else
  {
   newnode->link=tail;
   tail=newnode;
  }
 }
}
void deletion()
{ 
 struct node *temp,*temp1;
 int d;
 temp=front;
 if(front==NULL||tail==NULL)
  printf("\nList is empty");
 else
  {
   if(front==tail)
   {
    d=front->data;
    printf("poped element is%d",d);
    free(temp);
    front=NULL;
    tail=NULL;
   }
  else
  { temp1=tail;
    while(temp1!=front)
    {
     temp1=temp1->link;
    }
    d=temp->data;
    free(temp);
    front=temp1;
    printf("poped element is %d",d);
  }
}
}
void display()
{
 struct node *temp;
 if(tail==NULL||front==NULL)
   printf("\nList is empty" );
 else
 {
 temp=tail;
 do
  {
   printf("%d-->",temp->data);
   temp=temp->link;
  }while(temp!=NULL);
 }
}
int main(void)
{
 int ch=0,dat,k=0;
 while(ch!=4)
 {
  printf("\n1.insertion\n2.deletion\n3.display\n4.exit\nenter choice :");
  scanf("%d",&ch);
  switch(ch)
   { 
    case 1:printf("\nenter data to be pushed: ");
           scanf("%d",&dat);
           insertion(dat);
           break;
    case 2:deletion();
           break;
    case 3:display();
           break;
    case 4:break;
    default:printf("invalid entry\n");
            break;
   }
 }
} 
