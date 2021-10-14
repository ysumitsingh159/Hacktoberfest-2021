/*TBT 
create, 
recursive inorder traversal, 
recursive preorder traversal, 
recursive postorder traversal, 
non recursive inorder traversal, 
non recursive preorder traversal, 
non recursive postorder traversal.
*/ 
#include<iostream>
using namespace std;
//Tree elements will be stored as nodes
class node{
	public:
		int val;
		node *left,*right,*tright,*tleft;
		node()
		{
			val=0;
			left=NULL,right=NULL,tright=NULL,tleft=NULL;
		}
};

//Insert function
void insert(node* root,int val)
{
	if(root->tleft==NULL)				//check if root is null
	{
		root->val=val;					//make given element as root
		root->tleft=root;
		root->tright=root;
	}
	else
	{
		node* p=root;
		while(1)
		{
			if(p->val<val)					//given value is greater than root
			{
				if(p->right==NULL)					//check if right is null
				{
					node* q=new(node);
					q->val=val;
					q->tleft=p;						//point left thread to root
					if(p->tright!=p)				//else if right subtree does not exist,create it
					{
						q->tright=p->tright;
					}else
					{
						q->tright=q;
					}
					p->right=q;
					break;
				}
				else
				{
					p=p->right;
				}
			}
			else if(p->val>val)						//if given value is smaller than root value
			{
				if(p->left==NULL)				//check if left is null
				{
					node* q=new(node);
					q->val=val;
					q->tright=p;				//make right thread point to root
					if(p->tleft!=p)				
					{
						q->tleft=p->tleft;
					}else
					{
						q->tleft=q;
					}
					p->left=q;
					break;
				}
				else{
					p=p->left;
				}
			}
			else{
				cout<<"Node already exist.\n";
				break;
			}
		}
	}
}
//In-order recursive traversal function
void rec_in(node* p)
{
	if(p)
	{
		rec_in(p->left);
		cout<<p->val<<" ";
		rec_in(p->right);
	}
}
//In-order non-recursive traversal function
void nonrec_in(node* p)
{
	if(p)
	{
		while(1)
		{
		if(p->left)			//if left subtree exists
		{
			p=p->left;				//move pointer node left of left
		}
		else if(p->right)	//if right subtree xists
		{
			cout<<p->val<<" ";			//else print right subtree and traverse further
			p=p->right;					
		}
		else
		{
			cout<<p->val<<" ";
			while(p->tright->right==NULL)			//if right thread empty
			{
				if(p->tright==p)			//if right thread is root traverse again	
				{	
					return;					
				}
				p=p->tright;						//if right thread then print it
				cout<<p->val<<" ";
			}
			p=p->tright;
			cout<<p->val<<" ";
			p=p->right;							//further traverse right thread
		}
	}
	}
}
//pre-order recursive traversal function
void rec_pre(node* p)
{
	if(p)
	{
		cout<<p->val<<" ";
		rec_pre(p->left);
		rec_pre(p->right);
	}
}
//pre-order non-recursive traversal function
void nonrec_pre(node* p)						
{
	if(p)								//first print root 
	{
		while(1)
		{
			cout<<p->val<<" ";
			if(p->left)					//if root left subtree exists
			{
				p=p->left;				//make pointer left of left to traverse further
			}
			else if(p->right)			//if root of right subtree exists
			{
				p=p->right;
			}
			else
			{
				while(p->tright->right==NULL)
				{
					if(p->tright==p)			//if right node right thread point to root again traverse
					{
						return;
					}
					p=p->tright;		
				}
				p=p->tright->right;			
			}
		}
	}
}
//post-order recursive traversal function
void rec_post(node* p)
{
	if(p)
	{
		rec_post(p->left);
		rec_post(p->right);
		cout<<p->val<<" ";
	}
}
//post-order non-recursive traversal function
void nonrec_post(node* p)
{
	if(p)							//if root
	{
		while(1)
		{
		if(p->left)					//check if root leftsubtree exists
		{
			p=p->left;
		}
		else if(p->right)
		{
			p=p->right;
		}
		else
		{
			node* q=p;				//cosider root pointer q
			while(1)
			{
				cout<<q->val<<" ";
				if(q->tleft==q&&q->tright==q)			//if both left and right pointer points root then traverse back
				{
					return;
				}
				else if(q->tleft==q)			//if node left thread pointer points to root then 
				{
					if(q->tright->right)		//if node right thread pointer points to right
					{
						p=q->tright->right;			
						break;
					}
					else
					{
						q=q->tright; 		//else make root pointer as right thread
					}
				}
				else if(q->tright==q)		//if root pointer right is q
				{
					q=q->tleft;					//make pointer left thread
				}
				else if(q->tleft==q->tright->tleft)			//if root pointer left thread equals root right thread's left 
				{
					if(q->tright->right)
					{
						p=q->tright->right;				//make root as root pointer's right thread right node
						break;
					}else
					{
						q=q->tright;						//else make root pointer right thread and further iterate
					}
				}
				else if(q->tright==q->tleft->tright)				//if root pointer right thread equals root pointer left thread's right
				{
					q=q->tleft;						//then make root thread left thread
				}
			}
		}
	}
	}
}
//main function
int main(){
	node* root=NULL;
	int c;
	while(c!=9){
		cout<<"\n1.Create tree\n2.Insert\n3.Recursive inorder traversal\n4.Recursive pre-order traversal\n5.Recursive post-order traversal\n6.Non-recursive in-order traversal\n7.Non-recursive pre-order traversal\n8.Non-recursive post-order traversal\n9.End\nSelect your choice : ";
		cin>>c;
		int val;
		if(c==1){
			root=new(node);
			while(c){
				cout<<"Enter the value : ";
				cin>>val;
				insert(root,val);//continue using insert function to create tree 
				cout<<"Continue (0/1) : ";
				cin>>c;
			}
		}else if(c==2){
			if(root){
				cout<<"Enter the value : ";
				cin>>val;
				insert(root,val);
			}else{
				cout<<"Please create the table first\n";
			}
		}else if(c==3){
			cout<<"\nRecursive inorder traversal\n";
			rec_in(root);
		}else if(c==4){
			cout<<"\nRecursive pre-order traversal\n";
			rec_pre(root);
		}else if(c==5){
			cout<<"\nRecursive post-order traversal\n";
			rec_post(root);
		}else if(c==6){
			cout<<"\nNon-recursive inorder traversal\n";
			nonrec_in(root);
		}else if(c==7){
			cout<<"\nNon-recursive pre-order traversal\n";
			nonrec_pre(root);
		}else if(c==8){
			cout<<"\nNon-recursive post-order traversal\n";
			nonrec_post(root);
		}
	}
}
