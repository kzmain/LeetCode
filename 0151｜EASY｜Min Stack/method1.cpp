// Definition for a binary tree node.
struct Node {
int val;
Node *pre;
Node *next;
Node(int x) : val(x), pre(NULL), next(NULL) {}
Node(){}
};

class MinStack {
public:
   /** initialize your data structure here. */
   Node* b_node = NULL;
   Node* t_node = NULL;

   MinStack() {}

   void push(int x) {
       auto n_node = new Node(x);
       if(this->b_node == NULL){this->b_node = n_node; this->t_node = n_node; return;}
       else {n_node->pre = t_node; t_node->next = n_node;  t_node = n_node; return;}
   }

   void pop() {
       if(t_node->pre == NULL){delete this->t_node; this->b_node = NULL; this->t_node = NULL;}
       else{
           Node *prev, *curr;
           prev = this->t_node->pre;
           curr = this->t_node;
           this->t_node = prev;
           prev->next = NULL;
           delete curr;}
   }

   int top() {
       if(this->t_node == NULL) throw ;
       else return t_node->val;
   }

   int getMin() {
       if(this->t_node == NULL) throw ;
       int min = INT32_MAX;
       Node* curr = b_node;
       while(curr != NULL){
           if(curr->val < min) min = curr->val;
           curr = curr->next;
       }
       return min;
   }

   void print(){
       Node* curr = b_node;
       while(curr != NULL){
           std::cout<<curr->val;
           curr = curr->next;
       }
       std::cout<<std::endl;
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
   obj->print();
   int param_3 = obj->top();
   std::cout<<"param 3: "<<param_3<<std::endl;
   int param_4 = obj->getMin();
   std::cout<<"param 4: "<<param_4<<std::endl;
   return 0;
}