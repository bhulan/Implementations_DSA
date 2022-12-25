#include <bits/stdc++.h> 
// Stack class.
class Stack {
    
public:
    int *arr,size,topu;
    Stack(int capacity) {
        // Write your code here.
        arr=new int[capacity];
        size=capacity;
        topu=-1;
    }

    void push(int num) {
        // Write your code here.
        if(topu==size-1)
            return;
        else
            arr[++topu]=num;
    }

    int pop() {
        // Write your code here.
        if(topu!=-1){
         int ans=arr[topu];
            topu--;
            return ans;
        }
        else
            return -1;
       
    }
    
    int top() {
        // Write your code here.
          if(topu!=-1){
         int ans=arr[topu];
            return ans;
        }
        else
            return -1;
      
    }
    
    
    int isEmpty() {
        // Write your code here.
          if(topu==-1){
            return 1;
        }
        else
            return 0;
    }
    
    
    int isFull() {
        // Write your code here.
        if(topu==size-1){
            return 1;
        }
        else
            return 0;
    }
    
};
