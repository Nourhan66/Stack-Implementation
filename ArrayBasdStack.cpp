#include <bits/stdc++.h>
#include<stdio.h>
using namespace std; 

 struct Stack
 {
	int top;
    int entry[10000];
 };
 

void creatstack (Stack *ps)
  {
  	ps->top=0;
  }
  

int StackFull(Stack *ps)
 {
    if(ps->top==10000)
    {
      return 1;
    }
    else
    {
	  return 0;
    }
 }


void push(int e,Stack *ps)
 { 
    ps->entry[ps->top++]=e;
 }
 

int StackEmpty(Stack *ps)
 {
	if(ps->top==0)
	{
	   return 1;
    }
    else
    {
	  return 0;
    }
 }
 

void pop(int *pe,Stack *ps)
 {
	ps->top--;
	*pe=ps->entry[ps->top];
 }


void StackTop(int *pe,Stack *ps)
 {
	*pe=ps->entry[ps->top-1];
 }
 

int StackSize(Stack *ps)
 {
	return ps->top;
 }


void Display(int e)
 {	
	cout<<e;
 }


void TraverseStack(Stack *ps,void(*pf)(int))
 {
	for(int j=ps->top;j>0;j--)
	{
       (*pf)(ps->entry[j-1]);
    }
  }


void ClearStack(Stack *ps)
 {
	ps->top=0;
 }



int main() 

{
   Stack s;
   int e,size;
   creatstack(&s);
   if(!StackFull(&s))
      push(6,&s);
   if(!StackEmpty(&s))
      pop(&e,&s);
   if(!StackEmpty(&s))
      StackTop(&e,&s);
   size=StackSize(&s);
   TraverseStack(&s,&Display);
    ClearStack(&s);
return 0;
}

