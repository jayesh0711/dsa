#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 100
int stack[MAX];
char infix[MAX],postfix[MAX];
int top=-1;
void push(int);
int pop();
int isEmpty();
void inTopost();
void print();
int precedence(char);
int post_eval();
int main()
{
	int result;
	printf("enter the infix expresion");
	gets(infix);
	inToPost();
	result=post_eval();
	print();
	printf("enter the result obtained after postfixevaluation is ");
	printf("%d\n", result);
	return 0;
}
void inToPost()
{
	int i ,j=0;
	char next;
	char symbol1;
	for(i-0;i<strlen(infix);i++)
	{
		symbol1=infix[i];
			switch(symbol1)
			{
				case'(':
					push(symbol1);
					break;unction ‘precedence’:unction ‘precedence’:
evaluation_postfix.c:80:5: error: case label not within a switch statement
   80 |     case'^':
      |     ^~~~
evaluation_postfix.c:82:5: error: case label not within a switch statement
   82 |     case'/':
      |     ^~~~
evaluation_postfix.c:83:5: error: case label not within a switch statement
   83 |     case'*':
      |     ^~~~
evaluation_postfix.c:85:5: error: case label not within a switch statement
   85 |     case'+':
      |     ^~~~
evaluation_postfix.c:86:5: error: case label not within a switch statement
   86 |     case'-':
      |     ^~~~
evaluation_postfix.c:88:5: error: ‘default’ label not within a switch statement
   88 |     default:
      |     ^~~~~~~
evaluation_postfix.c: At top level:
evaluation_postfix.c:93:5: error: expected identifier or ‘(’ before ‘{’ token
   93 |     {
      |     ^

evaluation_postfix.c:80:5: error: case label not within a switch statement
   80 |     case'^':
      |     ^~~~
evaluation_postfix.c:82:5: error: case label not within a switch statement
   82 |     case'/':
      |     ^~~~
evaluation_postfix.c:83:5: error: case label not within a switch statement
   83 |     case'*':
      |     ^~~~
evaluation_postfix.c:85:5: error: case label not within a switch statement
   85 |     case'+':
      |     ^~~~
evaluation_postfix.c:86:5: error: case label not within a switch statement
   86 |     case'-':
      |     ^~~~
evaluation_postfix.c:88:5: error: ‘default’ label not within a switch statement
   88 |     default:
      |     ^~~~~~~
evaluation_postfix.c: At top level:
evaluation_postfix.c:93:5: error: expected identifier or ‘(’ before ‘{’ token
   93 |     {
      |     ^

				case')':
					while((next=pop())!='(')
						postfix[j++]=next;
					break;
				case'+':
			        case'-':
                                case'*':
                                case'/':
                                case'^':
					while(!isEmpty()&&precedence(stack[top])>=precedence(symbol1))
								postfix[j++]=pop();
								push(symbol1);
								break;
				default:
				postfix[j++]=symbol1;
				}
				
				
				while(!isEmpty())
				postfix[j++]=pop();
				postfix[j]='\0';
                   }
}

	
void print()
{
	int i=0;
	printf("the equivalent postfix expression ");
	while(postfix[i])
	{
		printf("%c",postfix[i++]);
	}
	printf("\n");
}
int precedence(char symbol1)
				{
				switch(symbol1);
				{unction ‘precedence’:
evaluation_postfix.c:80:5: error: case label notunction ‘precedence’:
evaluation_postfix.c:80:5: error: case label notunction ‘precedence’:
evaluation_postfix.c:80:5: error: case label not within a switch statement
   80 |     case'^':
      |     ^~~~unction ‘precedence’:
evaluation_postfix.c:80:5: error: case label not within a switch statement
   80 |     case'^':
      |     ^~~~
evaluation_postfix.c:82:5: error: case label not within a switch statement
   82 |     case'/':
      |     ^~~~
evaluation_postfix.c:83:5: error: case label not within a switch statement
   83 |     case'*':
      |     ^~~~
evaluation_postfix.c:85:5: error: case label not within a switch statement
   85 |     case'+':
      |     ^~~~
evaluation_postfix.c:86:5: error: case label not within a switch statement
   86 |     case'-':
      |     ^~~~
evaluation_postfix.c:88:5: error: ‘default’ label not within a switch statement
   88 |     default:
      |     ^~~~~~~
evaluation_postfix.c: At top level:
evaluation_postfix.c:93:5: error: expected identifier or ‘(’ before ‘{’ token
   93 |     {
      |     ^

evaluation_postfix.c:82:5: error: case label not within a switch statement
   82 |     case'/':
      |     ^~~~
evaluation_postfix.c:83:5: error: case label not within a switch statement
   83 |     case'*':
      |     ^~~~
evaluation_postfix.c:85:5: error: case label not within a switch statement
   85 |     case'+':
      |     ^~~~
evaluation_postfix.c:86:5: error: case label not within a switch statement
   86 |     case'-':
      |     ^~~~
evaluation_postfix.c:88:5: error: ‘default’ label not within a switch statement
   88 |     default:
      |     ^~~~~~~
evaluation_postfix.c: At top level:
evaluation_postfix.c:93:5: error: expected identifier or ‘(’ before ‘{’ token
   93 |     {
      |     ^
 within a switch statement
   80 |     case'^':
      |     ^~~~
evaluation_postfix.c:82:5: error: case label not within a switch statement
   82 |     case'/':
      |     ^~~~
evaluation_postfix.c:83:5: error: case label not within a switch statement
   83 |     case'*':
      |     ^~~~
evaluation_postfix.c:85:5: error: case label not within a switch statement
   85 |     case'+':
      |     ^~~~
evaluation_postfix.c:86:5: error: case label not within a switch statement
   86 |     case'-':
      |     ^~~~
evaluation_postfix.c:88:5: error: ‘default’ label not within a switch statement
   88 |     default:
      |     ^~~~~~~
evaluation_postfix.c: At top level:
evaluation_postfix.c:93:5: error: expected identifier or ‘(’ before ‘{’ token
   93 |     {
      |     ^
 within a switch statement
   80 |     case'^':
      |     ^~~~
evaluation_postfix.c:82:5: error: case label not within a switch statement
   82 |     case'/':
      |     ^~~~
evaluation_postfix.c:83:5: error: case label not within a switch statement
   83 |     case'*':
      |     ^~~~
evaluation_postfix.c:85:5: error: case label not within a switch statement
   85 |     case'+':
      |     ^~~~
evaluation_postfix.c:86:5: error: case label not within a switch statement
   86 |     case'-':
      |     ^~~~
evaluation_postfix.c:88:5: error: ‘default’ label not within a switch statement
   88 |     default:
      |     ^~~~~~~
evaluation_postfix.c: At top level:
evaluation_postfix.c:93:5: error: expected identifier or ‘(’ before ‘{’ token
   93 |     {
      |     ^

				case'^':
				return 3;
				case'/':
				case'*':
				return 2;unction ‘precedence’:
evaluation_postfix.c:80:5: error: case label not within a switch statement
   80 |     case'^':
      |     ^~~~
evaluation_postfix.c:82:5: error: case label not within a switch statement
   82 |     case'/':
      |     ^~~~
evaluation_postfix.c:83:5: error: case label not within a switch statement
   83 |     case'*':
      |     ^~~~
evaluation_postfix.c:85:5: error: case label not within a switch statement
   85 |     case'+':
      |     ^~~~
evaluation_postfix.c:86:5: error: case label not within a switch statement
   86 |     case'-':
      |     ^~~~
evaluation_postfix.c:88:5: error: ‘default’ label not within a switch statement
   88 |     default:
      |     ^~~~~~~
evaluation_postfix.c: At top level:
evaluation_postfix.c:93:5: error: expected identifier or ‘(’ before ‘{’ token
   93 |     {
      |     ^

				case'+':
				case'-':
				return 1;
				default:
				return 0;
				}
				}
				void push(int val);
				{
	if(top==MAX-1)
	{
		printf("stack overflow\n");
		exit(1);
	}
	top++;
	stack[top]=val;
}
int pop()
{
	int val;
	if(top==-1)
	{
		printf("stack underflow");
		exit(1);
	}
	val=stack[top];
	top=top-1;
	return val;
}
int isEmpty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}
		int power(int a,int b)
{
	int i,multi=1;
	for(i=0;i<b;i++)
			multi *=a;
			return multi;
			}


                                
int post_eval()
{
int i;
int a,b;
for(i=0;i<strlen(postfix);i++)
{
// if the symbol is an operand
  if(postfix[i]>='0'&&postfix[i]<='9')
  {
  push(postfix[i]-'0');
  }
  else
  {
  // pop the topmost symbo0l
   a=pop();
  b=pop();
  switch(postfix[i])
  {
	  case'+':
		  push(b+a);
		  break;
	  case'-':
		  push(b-a);
		  break;
	  case'*':
		  push(b*a);
		  break;
	  case'/':
		  push(b/a);
		  break;
	  case'^':
		  push(pow(b,a));
		  break;
  }
  }
}
return pop();
	}

