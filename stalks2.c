#include<stdio.h>
int arr[10];
int head=-1;
int tail=11;
void push(int pos,int data)
{
 if(head==tail)
 {
  printf("stack is full");
 }
 else
 {
  if(pos==1)
  {
   head++;
   arr[head]=data;   
  }
 else(pos==2)
  {
   tail--;
   arr[tail]=data;
  }
 }
}
void pop(int pos)
{
 if(pos==1)
 {
  if(head==-1)
  {
   printf("no element");
  }
  else
  {
   int a;
   a=arr[head];
   head--;
   printf("popped no is %d",a)
  }
 }
 else
  {
  if(tail==11)
  {
   printf("no element");
  }
  else
  {
   int b;
   b=arr[tail];
   tail++;
   printf("popped no is %d",a)
  }
 }
}
void display(int pos)
{
}
int main(void)
{
 int ch=0,dat,pos2;
 while(ch!=4)
 {
  printf("\n1.push\n2.pop\n3.display\n4.exit\nenter choice :");
  scanf("%d",&ch);
  switch(ch)
   { 
    case 1:printf("\nenter stack and data to be pushed: ");
           scanf("%d%d",&pos2,&dat);
           push(pos2,dat);
           break;
    case 2:printf("\nenter stack to be poped");
           scanf("%d",&pos2)
           pop(pos2);
           break;
    case 3:display(
           break;
    case 4:break;
    default:printf("invalid entry\n");
            break;
   }
 }
}
