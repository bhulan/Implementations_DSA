#include <bits/stdc++.h> 
class Queue {
    int *arr,Front,back ;
    int n=1000;
public:
    Queue() {
        // Implement the Constructor
        arr=new int[n];
        Front=-1;
        back=-1;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(Front==-1 || Front>back)
            return 1;
        else
            return 0;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(back==n-1)
            return;
        else{
            if(Front==-1)
                Front++;
            arr[++back]=data;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(Front==-1 || Front>back)
            return -1;
        else{
            int ans=arr[Front];
            Front++;
            return ans;
        }
    }

    int front() {
        // Implement the front() function
        if(Front==-1 || Front>back)
            return -1;
        else{
            int ans=arr[Front];
            return ans;
        }
    }
    
};
