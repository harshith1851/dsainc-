#include <iostream>
using namespace std;


class Stack{
  public:
  int *arr;
  int size;
  int top;
  Stack(int size){
    arr=new int[size];
    this->top=-1;
    this->size=size;
  }

  void push(int data){
    if(size-top>1){
      top++;
      arr[top]=data;
      cout<<"pushed the->"<<arr[top]<<endl;
    }
    else{
      cout<<"Stack overflow :)"<<endl;
    }
  }

  void pop(){
    if(top==-1){
      cout<<"Stack underflow :)"<<endl;
    }
    else{
      cout<<"poping the->"<<arr[top]<<endl;
      top--;
    }
  }

  void getTop(){
    if(top==-1){
      cout<<"No element"<<endl;
    }
    else{
      cout<<arr[top]<<endl; 
    }
  }
  void getSize(){
      if(top==-1){
      cout<<"No element"<<endl;
    }
    else{
      cout<<top+1<<endl; 
    }
  }

  bool isEmpty(){
   if(top==-1){
     return 1;
   }
    else{
      return 0;
    }
  }


  };
int main() {
  Stack s(4);
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(10);

  while(!s.isEmpty()){
    s.getTop();
    s.pop();
  }
  s.pop();
  
}