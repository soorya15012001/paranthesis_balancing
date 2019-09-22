#include<stdio.h> 
#include<string.h> 
int top=-1; 
char stack[100]; 
void push(char);
void pop(); 
int main() 
{     
	int i;
	char item;     
	char eq[100];     
	printf("enter the equation:");     
	gets(eq);     
	int len=strlen(eq);     
	for(i=0;i<len;i++)     	
	{         
		item=eq[i];
		if(item=='['||item=='{'||item=='(')             
			push(item);         
		else if(item==']'&&stack[top]=='[')             
			pop();         
		else if(item=='}'&&stack[top]=='{')             
			pop();         
		else if(item==')'&&stack[top]=='(')             
			pop();    
		}     
	if(top==-1)       
		printf("balanced");     
	else         
		printf("not balanced"); 
	return 0; 
} 
 
void push(char x) 
{     
	if(top>=100)         
	printf("stack is full");     
	else     
	{         
		top++;         
		stack[top]=x;     
	} 
} 
 
void pop() 
{     
	if(top<=-1)             
	printf("stack is empty ");     
	else 
    	{         
		top--;     
	} 
}