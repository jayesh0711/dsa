#include<stdio.h>
#include<stdlib.h>
struct node {
	float coeff;
	int expo;
	struct node* link;
};
struct node* insert(struct node* head,float co, int ex)
{
	struct node* temp;
	struct node* newp=(struct node*)malloc(sizeof(struct node));
	newp->coeff=co;
	newp->expo=ex;
	newp->link=NULL;
	if(head==NULL||ex>head->expo)
	{
		newp->link=head;
		head=newp;
	}
	else
	{
		temp=head;
		while(temp->link!=NULL&&temp->link->expo>=ex)
			temp=temp->link;
		newp->link=temp->link;
		temp->link=newp;
	}
	return head;
}
struct node* create(struct node* head)
{
	int n,i;
	float coeff;
	int expo;
	printf("enter the number of terms");
	scanf("%d",&n);
	for(i=0;i<n;i++)
			{
			printf("enter the coefficient for term %d",i+1);
			scanf("%f",&coeff);
			printf("enter the term for exponentterm %d",i+1);
			scanf("%d",&expo);
			head=insert(head,coeff,expo);
			}

			return head;
}
			
			void print(struct node* head)
			{
			if(head==NULL)
			printf("no polynomial");
			else
			{
			struct node* temp=head;
			while(temp!=NULL)
			{
				printf("(%.1fx^%d)",temp->coeff,temp->expo);
				temp=temp->link;
				if(temp!=NULL)
					printf("+");
				else
					printf("\n");
			}
			}
			}
void polyAdd(struct node* head1,struct node* head2)
{
	struct node* ptr1=head1;
	struct node* ptr2=head2;
	struct node* head3=NULL;
	while(ptr1!=NULL&&ptr2!=NULL)
	{
		if(ptr1->expo==ptr2->expo)
		{
			head3=insert(head3,ptr1->coeff+ptr2->coeff,ptr1->expo);
			ptr1=ptr1->link;
			ptr2=ptr2->link;
		}
		else if(ptr1->expo>ptr2->expo)
		{
			head3=insert(head3,ptr1->coeff,ptr1->expo);
		ptr1=ptr1->link;
		}
	      else if(ptr1->expo<ptr2->expo)
	      {
                        head3=insert(head3,ptr2->coeff,ptr2->expo);
                ptr2=ptr2->link;
	      }
	}
	while(ptr1!=NULL)
	{
		head3=insert(head3,ptr1->coeff,ptr1->expo);
                ptr1=ptr1->link;
     }
	while(ptr2!=NULL)
        {
                head3=insert(head3,ptr2->coeff,ptr2->expo);
                ptr2=ptr2->link;
     }
	printf("added polynomial");
	print(head3);
}
int main()
{
	struct node *head1=NULL;
	 struct node *head2=NULL;
	 printf("enter the the first polynomial");
	 head1=create(head1);
	 printf("enter the the second polynomial");
         head2=create(head2);
	 polyAdd(head1,head2);
	 return 0;
}


   




