#include<bits/stdc++.h>
//#include<string>
using namespace std;
class Stack{
    private:
        int top;
        int arr[5];
    public:
    stack(){
        top = -1;
        for (int i = 0; i < 5;i++){
            arr[i] = 0;
        }
    }
    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isfull(){
        if(top==4){
            return true;
        }
        else{
            return false;
        }
    }
    void push(int val){
        if(isfull()){
           cout<< "stack overflow" << endl;
           
        }
        else{
            top++;//top = -1 then top++ = (top=1
            arr[top] = val;
        
        }
    }
    int pop(){//value remove so no need to add any variable
        if(isempty()){
            cout << "stack is empty" << endl;
            return 0;
        }
        else{
            int popvalue = arr[top];
            arr[top] = 0;
            top--;
            return popvalue;
        }
    }
    int count(){
        return (top + 1);
    }
    int peek(int pos){
        if(isempty()){
             cout << "stack is empty" << endl;
        }
        else{
            return arr[pos];
        }         
    }
    void change(int pos,int val){
        arr[pos] = val;
        cout << "item changed at location" << pos << endl;
    }
    void display(){
        cout << "All values is in the stack are" << endl;
        for (int i = 4; i > 0;i--){
            cout << arr[i]<<endl;
        }
    }

};
int main(){
    Stack s1;
    int option= 0, position= 0, value=0;
    do{
        cout << "What operation do you want to perform? select option number.Enter 0 to exit" << endl;
        cout << "1. push" << endl;
        cout << "2. pop" << endl;
        cout << "3. is empty" << endl;
        cout << "4. is full" << endl;
        cout << "5. peek()" << endl;
        cout << "6. count()" << endl;
        cout << "7. change()" << endl;
        cout << "8. display" << endl;
        cout << "9. clear screen" << endl;

        cin >> option;
        switch(option){
            case 1:
                cout << "enter an item to push in the stack" << endl;
                cin >> value;
                s1.push(value);
                break;
            case 2:
                cout << "enter an item to push in the stack" << endl;
                break;
            case 3:
                if(s1.isempty()){
                cout << "stack is empty" << endl;
               }
               else{
                cout << "stack is not empty" << endl;
               }
               break;
            case 4:
               if(s1.isfull()){
                cout << "stack is full" << endl;
               }
               else{
                cout << "stack is not full" << endl;
               }
               break;
            case 5:
                cout << "enter position of item you want to peek" << endl;
                cin >> position;
                cout<<"peek function called - value at position"<<position <<"is"<<endl<<s1.peek(position)<<endl;
                break;
            case 6:
                cout<<"Count function called - "<<"Number of items in the stck are: "<<s1.count()<<endl;
                break;
            case 7:
                cout << "change fuction called - " << endl;
                cout << "Enter position you want to change : ";
                cin >> position;
                cout << endl;
                cout << "Enter value of item you want to change :";
                cin >> value;
                s1.change(position, value);
                break;
            case 8:
                cout << "Display function called" << endl;
                s1.display();
                break;
            case 9:
                system("cls");
                break;
            
        }
    } while (option != 0);
    return 0;
}