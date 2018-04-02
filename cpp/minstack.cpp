#include <vector>

using namespace std;

class MinStack {
public:
    
    vector<int> a;
    vector<int> min;
    
    /** initialize your data structure here. */
    MinStack(){
        
    }
    
    void push(int x) {
        a.push_back(x);
        if (x < min.back()) {
            min.push_back(x);
        }
    }
    
    void pop() {
        a.pop_back();
        min.pop_back();
    }
    
    int top() {
        return a.back();
    }
    
    int getMin() {
        return min.back();
    }
};

int main () {

    int x = 0;
    MinStack obj = MinStack();
    obj.push(x);
    x = 3;
    obj.push(x);
    obj.pop();
    int param_3 = obj.top();
    int param_4 = obj.getMin();
}
