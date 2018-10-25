#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};
Node*head1=NULL;
Node*head2=NULL;
void display(Node * base)
{
	Node *temp=base;
	while(temp->next!=NULL)
	{	
	cout<<temp->data<<" ";
	temp=temp->next;
	}
	cout<<temp->data<<endl;
}

void sublist(Node* base1,Node * base2)
{
	Node * temp1=base1;
	Node *temp2=base2;
	while(temp1!=NULL && temp2!=NULL)
	{
		if(temp1->data==temp2->data)
			{
				temp1=temp1->next;
				
			}
		else
		{
			temp1=base1;
		}
		temp2=temp2->next;
		
	}
	if(temp1==NULL)
	cout<<"Sublist";
	else
	cout<<"No Sublist found";
}

int main() {
int s1;
cin>>s1;
	Node *temp;
for(int i=0;i<s1;i++)
{
	int e;
	cin>>e;
	Node *p;

	p= new Node();
	p->next=NULL;
	p->data=e;
	if(head1==NULL)
	head1=p;
	else{
		
		temp=head1;
			while(temp->next!=NULL)
			{
					temp=temp->next;
			}
			temp->next=p;
	}

}
display(head1);





int s2;
cin>>s2;
for(int i=0;i<s2;i++)
{
	int e;
	cin>>e;
	Node *p;

	p= new Node();
	p->next=NULL;
	p->data=e;
	if(head2==NULL)
	head2=p;
	else{
		
		temp=head2;
			while(temp->next!=NULL)
			{
					temp=temp->next;
			}
			temp->next=p;
	}

}
display(head2);
sublist(head1,head2);
	return 0;
}
