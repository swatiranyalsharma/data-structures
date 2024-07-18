// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm> 
int main() {
    int array[4]= {1,3,2,4};
    
    std::stack<int> numberStack;
    std::vector<int> numberVector;
    for(int i=3;i>=0;i--){
        numberStack = std::stack<int>();
        for(int j=3;j>i;j--){
            numberStack.push(array[j]);
        }
        int isFound = 0;
        while(!numberStack.empty()) {
             std::cout <<"numberStack.top()  "<< numberStack.top() << " "<<"\n";
                if(numberStack.top()>array[i]){
                  isFound = 1;
                 numberVector.push_back(numberStack.top());
                 break;
                }
                numberStack.pop();
            }
            std::cout<<"isFound"<<isFound<<"\n";
             if(isFound == 0){
                 numberVector.push_back(-1);
            }
    }
    std::reverse(numberVector.begin(), numberVector.end());
    for (const auto& element : numberVector) {
     std::cout << element << " ";
    }
    return 0;
}