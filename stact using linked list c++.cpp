//stack using linked list push, pop and print function
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
		void push(int value){
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
		void print(){
			node *temp = new node;
			temp = head;
			if(head == NULL){
				cout << endl << "stack is empty" <<endl;
			}
			while(temp != NULL){
				cout << temp -> data << "\t";
				temp = temp -> next;
			}
		
		}
		int pop() {
			
    		node *current;
			current = head;
			
			node* previous;
			previous= head;
			
			if(head == NULL){
				cout << endl << "stack is empty" << endl ;
				return 0;
			}
			else if(head == tail){
					int headData = head -> data;
					head = head -> next;
					cout << endl << "last element: " << headData << endl;
					return 0;
			}
			else{
    			while(current->next != NULL) {
    				previous = current;
    				current = current->next;	
				}
				tail = previous;
				previous->next = current -> next;
				cout << endl << "last element: " << current -> data << endl;
				delete current;
				return 0;
			}
		}
};
int main(){
	linkList a;
	a.push(1);
	a.push(3);
//	a.push(7);
//	a.push(6);
//	a.push(16);	
	a.pop();
	a.pop();
	a.pop();
	a.push(4);
	a.pop();
	a.pop();
//	a.print();
//	cout << endl ;
//	a.push(17);
//	cout << endl << "left linked list" << endl;
//	a.printList();
	return 0;
}
