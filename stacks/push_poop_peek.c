#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int top = -1;
int stack[MAX];
void push(int);
int pop();
int peek();

int isfull();
int isempty();

int main()
{
int choice, data;
while(1)
{
printf("1.push 2.pop 3.peep 4.exit\n");
printf("enter the choice\n");
scanf("%d", &choice);
switch(choice)
{
case 1:printf("enter the data\n");
scanf("%d", &data);
if(isfull())
{
printf("its full\n");
}
else 
{
push(data);
}
break;

case 2: if(isempty())
{
printf("stack is empty\n");
}
else
{
printf("popped data is %d\n",pop());
}

case 3: if(isempty())
{
printf("stack is empty\n");
}
else
{
printf("top data is %d\n",peek());
}
break;
case 4: exit(0);
}
}
}
int isempty()
{
if(top==-1)
return 1;
return 0;
}

int isfull()
{
if(top == MAX-1)
return 1;
return 0;
}

void push(int d)
{
stack[++top] = d;
}

int pop()
{
return stack[top--];
}

int peek()
{
return stack[top];
}
/*
1.push 2.pop 3.peep 4.exit
enter the choice
1
enter the data
5
1.push 2.pop 3.peep 4.exit
enter the choice
1
enter the data
8
1.push 2.pop 3.peep 4.exit
enter the choice
1
enter the data
9
1.push 2.pop 3.peep 4.exit
enter the choice
2
popped data is 9
top data is 8
1.push 2.pop 3.peep 4.exit
enter the choice
3
top data is 8
1.push 2.pop 3.peep 4.exit
enter the choice
4

*/
