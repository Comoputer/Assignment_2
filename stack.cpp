#include<iostream>
using namespace std;
class Stack{
    private:
    static const int MAX = 5; 
    int arr[MAX];
    int top;

    public:
    Stack(){
        top = -1;
    }

    bool isEmpty(){
        return top == -1;
    }

    bool isFull(){
        return top >= MAX - 1;
    }

    void push(int element){
        if(isFull()){
            cout << "Cannot insert the element as the stack is full" << endl;
        }
        else{
            top++;
            arr[top] = element;
        }
    }
    void pop(){
        if(isEmpty()){
            cout << "Cannot pop the element as there are no elements in the stack" << endl;
        } else {
            top--;
        }
    }

    void display(){
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        } else {
            for(int i = 0; i <= top; i++){
                cout << arr[i] << "\n";
            }
        }
    }
};

int main(){
    Stack s;
    s.push(12);
    s.push(23);
    
    s.display();
    return 0;
}