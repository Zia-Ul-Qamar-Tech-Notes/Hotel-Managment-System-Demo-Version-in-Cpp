#include<iostream>
#include <conio.h>
using namespace std;
class node{
    public:
        int roll_no;
        string name;
        float marks,percentage;
        node *next;
};
class Queue{
	public:
		node *front;
		node *rear;
		Queue()
		{
			rear=front=NULL;
		}
		void enqueue()
		{
			node* temp=rear;
			double m,p;
			cout<<"Enter Marks of student: ";
            cin>>m;
            p=m/100*100;
		    node* n=new node();
		    n->marks=m;
		    n->percentage=p;
		    n->next=NULL;
		    if(front==NULL)
		    {
		    	front=rear=n;
			}
			else
			{
				rear->next=n;
				rear=n;
			}
	}
			
		void dequeue()
		{
		    node* temp;
		    if(front==rear)
		    {
		    	cout<<"Queue Empty"<<endl;
		    	front=rear=NULL;
			}
			else
			{
				temp=front;
				front=front->next;
				delete temp;
			}
		}
		
		void show()
		{
			node* temp=front;
			while(front!=NULL)
			{
				cout<<"Student Marks :"<<temp->marks<<endl;
				temp=temp->next;
			}
		}
};
class linked_list{
    public:
    	Queue q1;
        node *head=NULL;
        //Insertion via using Stack 
        void insert(){
            int r;
            string n;
            float m;
            cout<<"Enter roll NO. of student: ";
            cin>>r;
            cout<<"Enter name of student: ";
            cin>>n;
            q1.enqueue();
            node *temp=new node();
            if (!temp)
            {
                cout<<"There is no Student Data in the Stack"<<endl;
            } 
            temp->roll_no=r;
           	temp->name=n;
           	temp->next=head;
           	head=temp;
            cout<<"Data inserted successfully...."<<endl;
            
        }
        void search(){
            if (head==NULL)
            {
                cout<<"\nLinked list is empty"<<endl;
            } else{
                int r,found=0;
                cout<<"Enter roll No of student to search: ";
                cin>>r;
                node *ptr=head;
                while (ptr!=NULL)
                {
                    if(r==ptr->roll_no){
                        cout<<"\n\n Roll no: "<<ptr->roll_no;
                        cout<<"\n\n Name: "<<ptr->name; 
                        found++; 
                    }
                    ptr=ptr->next;
                }
                if (found==0)
                {
                    cout<<"Roll no not found"<<endl;
                }
            }
            
        }
        void count(){
            if (head==NULL)
            {
                cout<<"Linked list is empty"<<endl;
            } else{
                int c=0;
                node *ptr=head;
                while(ptr!=NULL){
                    c++;
                    ptr=ptr->next;
                }
                cout<<"Total number of node: "<<c<<endl;
            }
        }
        void update(){
            if (head==NULL)
            {
                cout<<"Linked list is empty"<<endl;
            } else{
                int r,found=0;
                cout<<"Enter roll No of student to update: ";
                cin>>r;
                node *ptr=head;
                while (ptr!=NULL)
                {
                    if(r==ptr->roll_no){
                        cout<<"\n\n Enter roll NO. of student: ";
                        cin>>ptr->roll_no;
                        cout<<"\n\n Enter name of student: ";
                        cin>>ptr->name; 
                        cout<<"\n\n Record updated...."<<endl; 
                        found++; 
                    }
                    ptr=ptr->next;
                }
                if (found==0)
                {
                    cout<<"Roll no not found"<<endl;
                }
            }

        }
        void del(){
            if (head==NULL)
            {
                cout<<"\n Linked list is empty...."<<endl;
            } else{
                int r,found=0;
                cout<<"Enter roll no to delete: ";
                cin>>r;
                if (r==head->roll_no)
                {
                    node *ptr=head;
                    head=head->next;
                    cout<<"\n roll no deleted...."<<endl;
                    found++;
                    delete ptr;
                } else{
                    node *pre=head;
                    node *ptr=head->next;
                    while (ptr!=NULL)
                    {
                        if (r==ptr->roll_no)
                        {
                           pre->next=ptr->next;
                           cout<<"/nRoll no deleted...."<<endl;
                           found++;
                           delete ptr;
                           break;
                        }
                        pre=ptr;
                        ptr=ptr->next;
                        
                    } 
                }
                if (found==0)
                {
                    cout<<"/n Roll no not found"<<endl;
                }  
            }
            
        }
        void show(){
        	node *temp;
        	if(head==NULL){
        		cout<<"No data is found"<<endl;
			}
                temp = head;
                cout<<"----------------------------------------------------"<<endl;
                cout<<"\nRoll no \t"<<"Name \t"<<"Marks \t"<<endl;
                cout<<"----------------------------------------------------"<<endl;
                while (head!=NULL)
                {
                    cout<<head->roll_no<<"\t\t"<<head->name<<"\t\t"<<head->marks<<"\t"<<endl;  
                    head=head->next;
                }
                }
//                q1.show();
            
            
};
class BST {
	int roll;
	BST *left, *right;
public:
	BST();

	BST(int value)
{
	roll=value;
	left=right=NULL;
}

	BST* Insert(BST*, int);
	void Inorder(BST*);
};
BST ::BST()
	: roll(0)
	, left(NULL)
	, right(NULL)
{
}

BST* BST ::Insert(BST* root, int value)
{
	if (!root) {
	                       	// Insert the first node, if root is NULL.
		return new BST(value);
	}

	// Insert roll.
	if (value>root->roll) {
									// Insert right node roll, if the 'value'
									// to be inserted is greater than 'root' node roll.

		root->right = Insert(root->right, value);
	}
	else {

		// Process left nodes.
		root->left = Insert(root->left, value);
	}

	return root;
}

// Inorder traversal function.
// This gives Roll Number in sorted order.
void BST ::Inorder(BST* root)
{
	if (!root) {
		return;
	}
	Inorder(root->left);
	cout<<root->roll << endl;
	Inorder(root->right);
}

void tree_call()
{
	BST b, *root = NULL;
	cout<<"Inorder Roll Number By Using Binery Tree"<<endl;
	root = b.Insert(root, 1);
	b.Insert(root, 2);
	b.Insert(root, 3);
	b.Insert(root, 4);

	b.Inorder(root);
}

int main(int argc, char const *argv[])
{
	
    linked_list obj;
    BST bst;
    p:
    system("cls");
    int choice;
    cout<<"\t=================================================="<<endl;
    cout<<"\t|        Student Management System               |"<<endl;
    cout<<"\t=================================================="<<endl;
    cout<<endl;
    cout<<"\t -------------Main Menu----------- "<<endl;
    cout<<"\t 1. Insert "<<endl;
    cout<<"\t 2. Search "<<endl;
    cout<<"\t 3. Count "<<endl;
    cout<<"\t 4. Update "<<endl;
    cout<<"\t 5. Delete "<<endl;
    cout<<"\t 6. Show "<<endl;
    cout<<"\t 7. ROll no by binary tree"<<endl;
    cout<<"\t 8. Exit "<<endl;
    cout<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        system("cls");
        obj.insert();
        break;
    case 2:
        system("cls");
        obj.search();
        break;
    case 3:
        system("cls");
        obj.count();
        break;
    case 4:
        system("cls");
        obj.update();
        break;
    case 5:
        system("cls");
        obj.del();
        break;
    case 6:
        system("cls");
        obj.show();
        break;
    case 7:
        system("cls");
        tree_call();
        break;
    case 8:
        exit(0);
    
    default:
        cout<<"Invalid choice"<<endl;
        break;
    }
    getch();
    goto p;

    
    return 0;
}