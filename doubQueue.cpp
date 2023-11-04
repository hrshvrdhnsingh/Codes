#include <bits/stdc++.h>
using namespace std;
class DoudEnded{
    int *arr;
    int front,rear,size;
    DoubEnded(int size){
        this->size=size;
        rear=size-1; front =-1;
        arr= new int(size);
    }
    void push_front(int value){
        if(front!=rear-1) arr[++front]=value;
    }
    void push_back(int value){
        if(rear!=front+1) arr[]
    }
};