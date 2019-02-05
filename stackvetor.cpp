#include <bits/stdc++.h>

using namespace std;

template <class T>
class SetOfStack {
public:
    SetOfStack( int max_size ): current_stack(0), max_stack_size(max_size) {
            stacks.reserve(10);
            stacks.push_back(stack<T>());
    }

    ~SetOfStack() {
            stacks.clear();
    }

    void push( T value ) {
            stacks[current_stack].push(value);
            if(stacks[current_stack].size() > max_stack_size) {
                    stacks.push_back(stack<T>());
                    current_stack++;
                    if(current_stack % 10 == 0 && current_stack > stacks.size()) {
                            stacks.reserve(stacks.size() + 10);
                    }
            }
    }

    T pop() {
            T value = stacks[current_stack].top();
            stacks[current_stack].pop();

            if(stacks[current_stack].size() == 0 && current_stack != 0 ) {
                    stacks[current_stack].pop();
                    current_stack--;
            }
    }

    T popAt( int index ) {
            T value = stacks[index].top();
            stacks[index].pop();
    }

private:
    int current_stack;
    int max_stack_size;
    vector< stack<T> > stacks;
};


int main() {
    // Test code
    SetOfStack<int> s_o_s(3);
    s_o_s.push(1);
    cout << s_o_s.pop() << endl;
    return 0;
}