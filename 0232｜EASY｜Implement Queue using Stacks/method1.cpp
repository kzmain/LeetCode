#include <map>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <stack>

class MyQueue {
    std::stack<int> inner;
    int bottom;
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }
    void reverse(){
        std::stack<int> temp;
        while(!inner.empty()){
            temp .push(inner.top());
            inner.pop();
        }
        inner = temp;
    }

    /** Push element x to the back of queue. */
    void push(int x) {
        if(inner.empty()) bottom = x;
        inner.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        reverse();
        int res = inner.top();
        inner.pop();
        bottom = inner.top();
        reverse();
        return res;
    }

    /** Get the front element. */
    int peek() {
        return bottom;
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return inner.empty();
    }
};



int main(){
    MyQueue* obj = new MyQueue();
    obj->push(1);
    obj->push(2);
    int param_2 = obj->peek();
    int param_3 = obj->pop();
    bool param_4 = obj->empty();
    std::cout<<"Peek: "<<param_2<<" Pop: "<<param_3<<" Empty: "<<param_4<<std::endl;
}