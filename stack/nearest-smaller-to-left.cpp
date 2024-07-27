//nearest smaller number to the left
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    stack<int> myStack;
    vector<int> myVector;
    int a[4] = {2, 4, 1, 2};
    for(int i=0;i<4;i++){
      if(myStack.empty()){
        cout<<"empty h"<<endl;
        myVector.push_back(-1);
      }else if(!myStack.empty() && myStack.top()< a[i]){
        cout<<"km value h"<<endl;
        myVector.push_back(myStack.top());
      }else if(!myStack.empty() && myStack.top()> a[i]){
        cout<<"zayda value h"<<endl;
        while(!myStack.empty() && myStack.top()> a[i]){
          myStack.pop();
        }
        if(myStack.empty()){
           myVector.push_back(-1);
        }else{
          myVector.push_back(myStack.top());
        }
      }
      myStack.push(a[i]);
    }
    for(const int& i: myVector){
      cout<<i<<" ";
    }
    return 0;
}