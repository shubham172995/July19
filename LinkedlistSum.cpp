#include<bits/stdc++.h>
using namespace std;

struct LinkedList
	{
		int data;
		LinkedList* next;
		LinkedList* prev;
	};

typedef struct LinkedList *node;
	node createNode(){
		node temp;
		temp=(node)malloc(sizeof(struct LinkedList));
		temp->next=NULL;
		temp->prev=NULL;
		return temp;
	}
	node add(node head, int value){
		node temp, p;
		temp=createNode();
		temp->data=value;
		temp->next=NULL;
		temp->prev=NULL;
		p=head;
		while(p->next){
			p=p->next;
		}
		p->next=temp;
		temp->prev=p;
		if(head==NULL)
			head=p;
		return head;
	}
	node addinstart(node head, int value){
		node temp;
		temp->data=value;
		temp->next=head;
		head->prev=temp;
		head=temp;
		return head;
	}

int main(){
	int n1, n2;
	cin>>n1>>n2;
	int first1, first2;
	cin>>first1;
	node chain1, chain2;
	chain1=createNode();
	chain1->next=chain1->prev=NULL;
	chain1->data=first1;
	for(int i=1;i<n1;i++){
		int temp;
		cin>>temp;
		chain1=add(chain1, temp);
	}
	cin>>first2;
	chain2=createNode();
	chain2->next=chain2->prev=NULL;
	chain2->data=first2;
	for(int i=1;i<n2;i++){
		int temp;
		cin>>temp;
		chain2=add(chain2, temp);
	}
	if(n1<n2){
		for(int i=n1;i<n2;i++)
			chain1=addinstart(chain1, 0);
		n1=n2;
	}
	else if(n1>n2){
		for(int i=n2;i<n1;i++)
			chain2=addinstart(chain2, 0);
		n2=n1;
	}
	chain1=addinstart(chain1, 0);
	chain2=addinstart(chain2, 0);
	++n1;++n2;
	node chain3;
	chain3->data=0;
	chain3->next=chain3->prev=NULL;
	for(int i=1;i<n1;i++)
		chain3=addinstart(chain3, 0);
	node ptr1, ptr2, ptr3;
	ptr1=chain1;
	ptr2=chain2;
	ptr3=chain3;
	for(int i=1;i<n1;i++){
		ptr1=ptr1->next;
		ptr2=ptr2->next;
		ptr3=ptr3->next;
	}
	int carry=0;
	while(n1--){
		ptr3->data=ptr1->data+ptr2->data+(carry/10);
		carry/=10;
		carry+=(ptr3->data)/10;
		ptr3->data=ptr3->data%10;
		ptr1=ptr1->prev;
		ptr2=ptr2->prev;
		ptr3=ptr3->prev;
	}
	while(ptr3){
		cout<<ptr3->data;
		ptr3=ptr3->next;
	}
	return 0;
}