#include <iostream>
using namespace std;

class Node{
public: 
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;

    }
};

class List{
    Node* head;
    Node* tail;
public:
    List(){                //constructor
        head= tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);  
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
            newNode-> next = head;
            head = newNode;
        }


    }
    
    void push_back(int val){
        Node *newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
    }

    void pop_front(){
        if(head == NULL){
            cout<<"List empty !\n";
            return;
        }
        else{
            Node* temp = head;
            head = head->next;
            temp -> next = NULL;
            delete temp;
        }
    }

    void pop_back(){
        if(head == NULL){
            cout<<"List empty!\n";
        }
        else{
            Node* temp = head;
            while(temp ->next != tail){
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;
            tail = temp;
        }
    }
    
    void insertMid(int val,int pos){
        if(pos < 0){
            cout<<"Invalid Position\n";
        }
        else if(pos == 0){
            push_front(val);
        }
        else{
            Node * temp = head;
            for(int i=0 ; i< pos-1; i++){
                if(temp == NULL){
                    cout<<"Invalid Position\n";
                    return; 
                }
                temp = temp ->next;
            }
            Node *newNode = new Node(val) ;
            newNode -> next = temp ->next ;
            temp -> next = newNode;
        }
    }
    int searchLL(int key){
        Node * temp = head;
        int idx = 0;
        while(temp!= NULL){
            if(temp ->data == key){
                
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }
    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout<< temp-> data<<"->";
            temp = temp ->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);
    ll.insertMid(7,3);
    ll.print();
    cout<<ll.searchLL(3)<<endl;
    
    return 0;

}