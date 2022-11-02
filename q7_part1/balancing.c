#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100


int top=-1;
char stack[MAX];
void push(char);
char(pop());
int isEmpty();
int isfull();
int check_balanced(char*);
int match_char(char,char);
int main()
{
	char expr[MAX];
	int balanced;
	printf("enter the algebraic expression");
	gets(expr);
	balanced=check_balanced(expr);
	if(balanced==1)
		printf("the expressionis valid");
	else
		printf("the expression is not valid");
	return 0;
}
int check_balanced(char* s)
{
	char temp;
	int i;
	for(i=0;i<strlen(s);i++)
	{
		//if the symbol is left braket
		if(s[i]=='['|| s[i]=='{'|| s[i]=='(')
			push(s[i]);
		// if the symbol is right bracket
		 if(s[i]==']'|| s[i]=='}'|| s[i]==')')
		 {
			 if(isEmpty())
			 {
				 printf("right bracket are more then the left\n");
				 return 0;
			 }
			 else
			 {
				 temp=pop();
				 if(!match_char(temp,s[i]))
				 {
					 printf("mismatched bracket\n");
					 return 0;
				 }
			 }
		 }
	}
	if(isEmpty())
	{
		printf("bracket are well balanced\n");
		return 1;
	}
	else
	{
		printf("the bracket are more then one");
		return 0;
	}
}
void push(char c)
{
	if(isfull())
	{
		printf("stack overflow");
		exit(1);
	}
	top++;
	stack[top]=c;
}
char pop()
{
	char c;
	if(isEmpty())
	{
		printf("stack underflow");
		exit(1);
	}
	c=stack[top];
	top--;
	return c;
}
int isEmpty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}
int isfull()
{
	if(top==MAX-1)
		return 1;
	else
		return 0;
}
int match_char(char a,char b)
{
	if(a=='['&& b==']')
		return 1;
	 if(a=='{'&& b=='}')
       return 1;
       if(a=='('&& b==')')
	       return 1;
       return 0;
}





