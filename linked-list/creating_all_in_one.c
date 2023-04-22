/*1. create list
2. Add at beg
3. Add at end
4. Add at display
5. Delete*/
#include<stdio.h>
#include<stdlib.h>
struct node{
int info;
struct node *link;
};
struct node *create_list(struct node *start);
struct node *addatbeg(struct node *start,int data);
struct node *addatend(struct node *start,int data);
void display(struct node *start);
struct node *delete(struct node *start, int data);
int main()
{
struct node *start = NULL;
int choice,data;
while(1)
{
printf("1. create list\n");
printf("2. Add at beg\n");
printf("3. Add at end\n");
printf("4. Add at display\n");
printf("5. Delete\n");
printf("enter choice ");
scanf("%d",&choice);
switch(choice)
{
case 1:
start = create_list(start);
break;
case 2:
printf("enter data");
scanf("%d", &data);
start = addatbeg(start,data);
break;
case 3:
printf("enter data");
scanf("%d", &data);
start = addatbeg(start,data);
break;
case 4:
display(start);
break;
case 5:
printf("enter data to be deleted");
scanf("%d",&data);
start = delete(start,data);
break;
default:
printf("wrong choice");
}
}
}
// add at beg
struct node *addatbeg(struct node *start,int data)
{
struct node *temp;
temp = (struct node*)malloc(sizeof(struct node));
temp->info = data;
temp->link = start;
start = temp;
return start;
}
// add at end
struct node *addatend(struct node *start,int data)
{
struct node *p,*temp;
temp = (struct node *)malloc(sizeof(struct node));
temp->info= data;
p=start;
while(p->link != NULL)

p=p->link;

p->link = temp;
temp->link = NULL;
return start;
}
// creating
struct node *create_list(struct node *start)
{
int data,n,i;
printf("enter n values");
scanf("%d",&n);
start = NULL;
if(n==0)
{
return start;
}
printf("enter data");
scanf("%d",&data);
start = addatbeg(start,data);
for(i=2;i<=n;i++)
{
printf("enter the element to be inserted at last :");
scanf("%d", &data);
start = addatend(start,data);
}
return start;
}
//display
void display(struct node *start)
{
struct node *p;
if(start == NULL)
{
printf("list is empty");
return;
}
p= start;
while(p!=NULL)
{
printf("%d",p->info);
p=p->link;
}
}
//delete
struct node *delete(struct node *start, int data)
{
struct node *p,*temp;
p=start;
while(p->link!=NULL)
{
if(p->link->info == data)
{
temp = p->link;
p->link = temp->link;
free(temp);
printf("deleted list is ");

display(start);
return start;
}
p=p->link;
}
}
