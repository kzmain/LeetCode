
class MinStack {
public:
    /** initialize your data structure here. */
    std::vector<int> stack = std::vector<int>{};
    MinStack() {}

    void push(int x) {
        this->stack.push_back(x);
    }

    void pop() {
        this->stack.pop_back();
    }

    int top() {
        return this->stack.back();
    }

    int getMin() {
        return *std::min_element(this->stack.begin(), this->stack.end());
    }
};



int main() {
    MinStack* obj = new MinStack();
    obj->push(-1);
    obj->push(1);
    obj->push(2);
    obj->push(3);
    obj->push(4);
    obj->pop();
//    obj->print();
    int param_3 = obj->top();
    std::cout<<"param 3: "<<param_3<<std::endl;
    int param_4 = obj->getMin();
    std::cout<<"param 4: "<<param_4<<std::endl;
    return 0;
}
