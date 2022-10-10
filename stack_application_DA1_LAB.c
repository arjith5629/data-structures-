#include<stdio.h>
#define n 20 
int top_backward_stack=-1,top_forward_stack=-1,cha;
int backward_stack[100],forward_stack[100];
int current_page;

void forward_push();
void forward_pop();
void backward_push();
void backward_pop();
void show_webpages();


int main()
{

printf("ENTER YOUR CURRENT WEBPAGE : \t"); 
scanf("%d",&current_page); 
do
{

printf("\n\nENTER THE CHOICE TO DO NET SURFING:\n");
printf(" 1.TO GO FORWARD\n 2.TO GO BACKARD\nPRESS : \t");
scanf("%d",&cha);

switch(cha)
{
case 1:
backward_push();
forward_pop();
show_webpages();

break;

case 2:
forward_push();
backward_pop();
show_webpages();

break;

default:
break;

}

}while(cha<=2);

return 0;

}


void forward_push()
{
   if( top_forward_stack+1 >= n )
   {
   printf("\nTHERE IS NO FURTHER PAGE AVAILABLE.\n");
   }
   else
   {
   top_forward_stack++;
   forward_stack[top_forward_stack]=current_page;
   }
}


void backward_push()
{
   if(top_backward_stack+1 >= n)
   {
   printf("\nTHERE IS NO FURTHER PAGE AVAILABLE.\n");
   }
   else
   {
    top_backward_stack++;
    backward_stack[top_backward_stack]=current_page;
   }

}


void forward_pop()
{
    if(top_forward_stack==-1)
    {
         
        printf("ENTER THE WEBAGE YOU WANT TO REACH : \t");
        scanf("%d",&current_page);
    }
    else
    {
    current_page=forward_stack[top_forward_stack];
    top_forward_stack--;

    }
}


void backward_pop()
{
    current_page=backward_stack[top_backward_stack];
    top_backward_stack--;
}


void show_webpages()
{
    if(top_backward_stack==-1 || top_forward_stack==-1)
    {
        printf("THE CURRENT PAGE IS %d.\n\n",current_page);
    }
    else
    {
        printf("\nTHE BACKWARD PAGE IS %d.\nTHE CURRENT PAGE IS %d.\nTHE FORWARD PAGE IS %d.\n\n\n",
        backward_stack[top_backward_stack],current_page,forward_stack[top_forward_stack]);
    }
}






