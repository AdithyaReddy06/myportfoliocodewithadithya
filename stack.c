#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10
int stack[MAX_SIZE],top=-1;
void push(int item){
    if(top==MAX_SIZE-1){
        printf("stack overflow\n");
    }else{
        stack[++top]=item;
    }
    }
    int pop(){
        if(top==-1){
            printf("stack underflow\n");
            return-1;
        }else{
            return stack[top--];
        }
    }
    int peek(){
        if(top==-1){
            printf("stack is empty\n");
            return-1;
        }else{
            return stack[top];
        }
    }
    void display()
    {
        int i;
        if(top==-1)
        printf("stack is empty\n");
        else{
            for(i=top;i>-1;i--)
            printf("%d\n",stack[i]);
        }
    }
    int main()
    {
        int ch,data;
        do
        {
            printf("STACK OPERATIONS\n");
            printf("\n1.Push\n2.pop\n3.Peek(top)\n4.display\n5.exit");
            printf("\n enter your choice:");
            scanf("%d,&ch");
            switch(ch)
            {
                case 1:printf("enter data to push:");
                scanf("%d",&data);
                push(data);
                break;
                case 2:printf("popped:%d\n",pop());
                break;
                case 3:printf("Top element:%d\n",peek());
                break;
                case 4:display();
                break;
                case 5:break;
                default:printf("enter valid choice");
            }
        }while(ch!=5);
        return 0;
    }
    