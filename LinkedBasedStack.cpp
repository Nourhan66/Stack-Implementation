#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

 struct StackNode
 {
	int entry;
	struct StackNode *next;
 };
 
 struct Stack
 {
   StackNode *top;
    int Size;
 };
 

 void CreateStack(Stack *ps)
 {
   ps->top=NULL;
   ps->Size=0;
 }

void push(int e,Stack *ps)
 {
	StackNode *ptr=(StackNode*)malloc(sizeof(StackNode));
     ptr->entry=e;
     ptr->next=ps->top;
      ps->top=ptr;
     ps->Size++;
 }


void pop(int *pe,Stack *ps)
 {
	StackNode *ptr;
	*pe=ps->top->entry;
	ptr=ps->top;
    ps->top=ps->top->next;
    free(ptr);
     ps->Size--;
 }


int StackEmpty(Stack *ps)
 {
	return ps->top==NULL;

 }


int StackFull(Stack *ps)
 {
	return 0;
 }
 

int StackSize(Stack *ps)
 {
	return ps->Size;
 }


void DisPlay(int e)
 {
  cout<<e<<endl;
 }


void TraverseStack(Stack *ps,void(*pf)(int))
 {
	StackNode *ptr=ps->top;
     while(ptr)
	{
      (*pf)(ptr->entry);
       ptr=ptr->next;
    }
  }
  

void ClearStack(Stack *ps)
 {
   StackNode *ptr=ps->top;
    while(ptr)
  {
    ptr=ptr->next;
    free(ps->top);
    ps->top=ptr;
 }
 ps->Size=0;
}


int main()
 {
    Stack s;
    int e;
   CreateStack(&s);
   if(!StackFull(&s))
     push(6,&s);
   if(!StackEmpty(&s))
      pop(&e,&s);
   int Size=StackSize(&s);
   DisPlay(e);
  TraverseStack(&s,&DisPlay);
   ClearStack(&s);
 }



