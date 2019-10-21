#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
};
class linkList{
	private:
		node *head, *tail;
	public:
		linkList(){
			head = NULL;
			tail = NULL;
		}
		void creatList(int value){
			node *temp = new node;
			temp -> data = value;
			temp -> next = NULL;
			if(head == NULL){
				head = temp;
				tail = temp;
			}
			else{
				tail -> next = temp;
				tail = temp;
			}
			
		}
		void printList(){
			node *temp = new node;
			temp = head;
			while(temp != NULL){
				cout << temp -> data << "\t";
				temp = temp -> next;
			}
		}
		void stack() {
			
    		node *current;
			current = head;
			
			node* previous;
			previous= head;
 
    		while(current->next != NULL) {
    			previous = current;
    			current = current->next;	
			}
			previous->next = NULL;
			tail = previous;
			cout << endl << "last element: " << current -> data << endl;
			delete current;
		}
};
int main(){
	linkList a;
	a.creatList(1);
	a.creatList(3);
	a.creatList(7);
	a.creatList(6);
	a.creatList(16);	
	a.stack();
	a.printList();
	cout << endl ;
	a.creatList(17);
	cout << endl << "left linked list" << endl;
	a.printList();
	return 0;
}
