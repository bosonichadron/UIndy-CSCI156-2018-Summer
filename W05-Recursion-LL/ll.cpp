/*
    Name: Paul Talaga
    Date: June 14
    Desc: Linked-list example.

*/
#include <iostream>
#include <sstream>
#include <cstdlib>

using namespace std;

struct node_t{
  int data;
  node_t* next;
};

class LinkedList{
    private:
    node_t* head;
    
    public: 
    LinkedList(){
        head = NULL;
    }
    
    ~LinkedList(){
        node_t* temp = head;
        if(!temp){
            return;
        }
        while(head){
            head = temp->next;
            delete temp;
            temp = head;
        }
        temp = NULL;
        head = NULL;
    }
    
    void push_front(int value){
        node_t* temp = new node_t;
        temp->data = value;
        temp->next = head;
        head = temp;
    }
    
    void push_back(int value){
        node_t* temp = head;
        if(!temp){
            push_front(value);
            return;
        }
        while(temp->next){
            temp = temp->next;
        }
        temp->next = new node_t;
        temp->next->data = value;
        temp->next->next = NULL;
    }
    
    int size(){
        int counter = 0;
        node_t* temp = head;
        while(temp){
            counter++;
            temp = temp->next;
        }
        return counter;
    }
    
    string getAsString(){
        stringstream s;
        s << "[";
        node_t* temp = head;
        while(temp){
            s << temp->data;
            if(temp->next){
                s << ", ";
            }
            temp = temp->next;
        }
        s << "]";
        return s.str();
    }
    
    int operator[](int value){
        if(value < 0){
            value = size() + value;
        }
        int counter = 0;
        node_t* temp = head;
        while(temp){
            if(counter == value){
                return temp->data;
            }
            counter++;
            temp = temp->next;
        }
        cout << "Index is invalid" << endl;
        return 0;
    }
    
    void insertAfter(int value, int index){
        if(value < 0){
            value = size() + value;
        }
        int counter = 0;
        node_t* temp = head;
        while(temp){
            if(counter == index){
                // temp->next; is the node BEFORE
                node_t* temp2 = new node_t;
                temp2->data = value;
                temp2->next = temp->next;
                temp->next = temp2;
                return;
            }
            counter++;
            temp = temp->next;
        }
        push_back(value);
    }
};

int main(){
    //srand(time(0));
    LinkedList a;
    for(unsigned i = 0; i < 10; i++){
        //a.push_front(rand() % 100);
    }
    for(unsigned i = 0; i < 10; i++){
        a.push_back(rand() % 100 + 100);
    }
    cout << a.size() << endl;
    cout << a.getAsString() << endl;
    a.insertAfter(5, 200);
    cout << a.getAsString() << endl;
    //cout << "0: " << a[110] << endl;
    //cout << "last: " << a[-200] << endl;
}