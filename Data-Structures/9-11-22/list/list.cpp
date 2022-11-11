#include <iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int d){
            data = d;
        }
};


class List{
    public:
        Node* head;
        Node* last;
        Node* current;

        List(){
            head = nullptr;
            last = nullptr;
        }
        
        void pushBack(int data){
            if(head == nullptr){
                head = new Node(data);
                last = head;
            }
            else{
                current = new Node(data);
                last->next = current;
                current->prev = last;
                last=current;
            }
        }

        void pushFront(int data){
            if(head == nullptr){
                head = new Node(data);
                last = head;
            }
            else{
                current = new Node(data);
                current->next = head;
                head->prev = current;
                head = current;
            }
        } 
        
        void printList(){
            current = head;
            if(current == nullptr){
                cout << "List is empty.\n";
                return;
            }
            while(current != nullptr){
                cout << current->data << endl;
                current = current->next;
            }
        }

        void popBack(){
            if(size() == 0){
                cout << "List is empty.\n";
                return;
            }
            Node* new_last = last->prev;
            delete last;
            last = new_last;
            last->next = nullptr;
        }
        
        void popFront(){
            if(size() == 0){
                cout << "List is empty.\n";
                return;
            }
            Node* new_head = head->next;
            delete head;
            head = new_head;
            head->prev = nullptr;
        }

        void insert(int index, int data){
            if((index < 0)||(index > (size() - 1))){
                cout << "Index is not in arrangment.\n";
                return;
            }
            Node* current1 = head;
            for(int i = 0; i < index - 1; i++){
                current1 = current1->next;
            }
            Node* current2 = new Node(data);
            Node* current3 = current1->next;
            current1->next = current2;
            current2->prev = current1;
            current2->next = current3;
            current3->prev = current2;
        }

        void clear(){
            while(last != head){
                current = last->prev;
                delete last;
                last = current;
            }
        }
        
        int size(){
            int size = 0;
            current = head;
            while(current != nullptr){
                size++;
                current = current->next;
            }
            return size;
        }

        bool empty(){
            return size();
        }

        void splice(List next_node){
            last->next = next_node.head;
            next_node.head->prev = last;
            
        }
        
        void find(int d){
            int count = 0;
            current = head;
            while(current->next != nullptr){
                if (current->data == d){
                    ++count;
                    cout << "The " << count << "elemenet :" << d << endl; 
                }
            }
        }
};

    
int main(){
    List first;
    List second;
    first.pushFront(100);
    first.pushBack(300);
    first.insert(2, 500);
    first.insert(1, 500);
    first.pushFront(400);
    first.popBack();
    second.pushBack(600);
    second.pushFront(789);
    second.pushBack(800);
    second.popFront();
    cout << "First list :\n";
    first.printList();
    cout << "Second list :\n";
    second.printList();
    cout << "We are splicing, the result :\n";
    first.splice(second);
    first.printList();
}   
