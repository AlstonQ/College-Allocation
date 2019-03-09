#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#define max=3
struct node
{
char name[80];
int m1;
int m2;
int m3;
float per;
int c;
struct node *next;
}*start=NULL;
struct node *create_ll(struct node* start);
struct node *display(struct node* );
struct node *generate(struct node*);

struct node* create_ll(struct node* start)
{
int num;
int p,c,m;
int total,totper;
struct node *n=NULL,*t,*last;
printf("Enter -1 to end");
scanf("%d",&num);
while(num!=-1)
{
n=(struct node*)malloc(sizeof(struct node));
printf("Enter name");
scanf("%s",n->name);
printf("Enter Marks in PCM") ;
scanf("%d%d%d",&p,&c,&m);
n->m1=p;
n->m2=c;
n->m3=m;
total=p+c+m;
totper=total/3;
n->per=totper;
n->next=NULL;
if(start==NULL)
start=n;
else
{
t->next=n;
}
t=n;
printf("Enter Data:");
scanf("%d",&num);
}
return start;
}
struct node *generate(struct node *start)
{
int num;
struct node* ptr;
ptr=start;
printf("Enter -1 to end");
scanf("%d",&num);
while(num!=-1)
{
while(ptr!=NULL)
{
if( ptr->per>=75)
{
ptr->c=1;
}
else if(ptr->per<75 && ptr->per>=65)
{
ptr->c=2;
}
else if(ptr->per<65 && ptr->per>=35)
{
ptr->c=3;
}
else
{
printf("Name=%s",ptr->name);
printf("Percentage=%f",ptr->per);
printf("Admission not Applicable");
}
ptr=ptr->next;
}
printf("Emter -1 to terminate");
scanf("%d",&num);
}return start;
}

struct node *display(struct node* start)
{
int ch;
int num;
struct node *ptr;
ptr=start;
printf("Enter -1 to terminate");
scanf("%d",&num);
while(num!=-1)
{
do
{
printf("Enter college name");
printf("\n 1.College A");
printf("\n 2.College B");
printf("\n 3.College C");
printf("\n 4.Previous Menu");
printf("\n Enter choice");
scanf("%d",&ch);
switch(ch)
{
case 1: while(ptr!=NULL)
	{
	printf("College A students:");
	if(ptr->c==1)
	{
	printf("Name=%s",ptr->name);
	ptr=ptr->next;
	}
	}
	break;
case 2:while(ptr!=NULL)
	{
	printf("College B students:");
	if(ptr->c==2)
	{
	printf("Name=%s",ptr->name);
	ptr=ptr->next;
	}
	}
	break;
case 3:while(ptr!=NULL)
	{
	printf("College C Students:");
	if(ptr->c==3)
	{
	printf("Name=%s",ptr->name);
	ptr=ptr->next;
	}
	}
}
printf("Enter -1 to terminate");
scanf("%d",&num);
}while(ch!=4);
} return start;
}
void main()
{
int option;
clrscr();
do
{
printf("\n\n WELCOME");
printf("\n 1:Create a list");
printf("\n 2.Generate Node");
printf("\n 3.Display List");
printf("\n 4.Delete Node");
printf("\n 5.Exit");
printf("\n Enter option:");
scanf("%d",&option);
switch(option)
{
case 1: start=create_ll(start);
	break;
case 2: start=generate(start);
	break;
case 3: start=display(start);
	break;
case 4: break;
}
}
while (option!=5);
getch();
}