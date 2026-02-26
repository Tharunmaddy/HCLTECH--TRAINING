// Write a custom dynamic array (vector) API supporting push(),pop(),resize()
#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int *data;
    int capacity;
    int size;
}Vector;
void init(Vector *v,int capacity)
{
    v->size=0;
    v->capacity=capacity;
    v->data=(int*)malloc(sizeof(int)*capacity);
}
void resize(Vector *v,int capacity)
{
    v->capacity=capacity;
    v->data=(int*)realloc(v->data,sizeof(int)*(capacity));
}

void push(Vector *v,int value)
{
    if(v->size==v->capacity)
    {
        resize(v,v->capacity*2);
    }
    v->data[v->size++]=value;
}
int pop(Vector *v)
{
    if(v->size==0)
    {
        printf("Element not exist\n");
        return 1;
    }
    return v->data[--v->size];
}
void display(Vector *v)
{
    for(int i=0;i<v->size;i++)
    {
        printf("%d",v->data[i]);
    }
}
int main()
{
    int capacity;
    printf("Enter the capacity\n");
    scanf("%d",&capacity);
    Vector v;
    init(&v,capacity);
    push(&v,20);
    push(&v,30);
    push(&v,40);
    printf("popped element :%d\n",pop(&v));
    display(&v);
}