//nearest greated number to the left
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() 
{
    stack<int> myStack;
    vector<int> myVector;
    int a[4] = {1, 4, 3, 2};
    for(int i=0;i<4;i++){
      if(myStack.empty()){
        myVector.push_back(-1);
      }else if(!myStack.empty() && myStack.top()> a[i]){
        myVector.push_back(myStack.top());
      }else if(!myStack.empty() && myStack.top()< a[i]){
        while(!myStack.empty() && myStack.top()< a[i]){
          myStack.pop();
        }
        if(myStack.empty()){
           myVector.push_back(-1);
        }else{
          myVector.push_back(a[i]);
        }
      }
      myStack.push(a[i]);
    }
    for(const int& i: myVector){
      cout<<i<<" ";
    }
    return 0;
}