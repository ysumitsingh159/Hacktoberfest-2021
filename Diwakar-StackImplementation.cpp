#include<iostream>
#include<vector>
#include<algorithm>

template <class T>
class Stack{
private:
    std::vector<T> stack;
public:
    //constructor
    Stack(std::vector<T> input){
        for(auto i:input){
            push(i);
        }
    }

    //push elements into stack i.e vector list named stack
    void push(T c){
        stack.push_back(c);
    }

    //pop elements out of stack and this method returns the popped element
    char pop(){
        char temp=stack[stack.size()-1];
        stack.pop_back();
        return temp;
    }

    //helper method to know size of the stack
    size_t size(){
        return stack.size();
    }   

    void printStack(){
        std::vector<T> temp;
        temp = stack;
        std::reverse(temp.begin(),temp.end());
        std::cout<<"Stack Consists of\n";
        for(auto a:temp){
            std::cout<<"|__";
            std::cout<<a;
            std::cout<<"__|\n";
        }
    }
};

int main(){
/*
below code in comments intializes the stack with 5 characters
and uses the helper methods to print stack
*/
    Stack<char> s {{'1','2','3','4','5'}};
    s.printStack();

} 
