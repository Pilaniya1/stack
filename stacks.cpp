#include<bits/stdc++.h>

using namespace std;
#define MAX 1000
class Stack{
    int Top;
    public:
    int a[MAX];//maximum size of stack

    Stack() { Top = -1;}
    bool push (int x);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack ::push(int x)
{
    if(Top >=(MAX -1)){
        cout<<"Stack Overflow";
        return false;

    }
    else{
        a[++Top]=x;
        cout<<x<<"pushed into stack \n";
        return true;
    }
}
int Stack :: pop(){
        if (Top < 0){
            cout<<"Stack underflow";
            return 0;


        }
        else{
            int x = a[Top--];
            return x;


        }
}
int Stack:: peek(){
        if(Top<0){
            cout<<"Stack is empty";
            return 0;


        }
        else{
            int x = a[Top];
            return x;

        }
}
bool Stack:: isEmpty(){
     return (Top<0);
}

//driver program to test above functtions.
int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.pop() << "popped from stack \n";
    //print all elements in stack
    cout<<"Elements present in stack: ";
    while(!s.isEmpty()){
        //print top element in stack
        cout<<s.peek() <<" ";
        //remove top elemement from stack
        s.pop();

    }
    return 0;
}

