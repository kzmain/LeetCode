#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <algorithm>
#include <unordered_set>
#include <cmath>

class MyStack {
    std::queue<int> inner;
public:
    /** Initialize your data structure here. */
    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        this->inner.push(x);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        if(this->empty()) return 0;
        int result = this->inner.back();
        std::queue<int> temp;
        while(this->inner.size() != 1){
            temp.push(this->inner.front());
            this->inner.pop();
        }
        this->inner = temp;
        return result;
    }

    /** Get the top element. */
    int top() {
        return this->inner.back();
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return this->inner.empty();
    }
};

int main(){
    MyStack* obj = new MyStack();
    obj->push(1);
    obj->push(2);
    int param_2 = obj->top();
    int param_3 = obj->pop();
    bool param_4 = obj->empty();
    std::cout<<"TOP: "<<param_2<<" POP: "<<param_3<<" EMPTY: "<<param_4<<std::endl;
}