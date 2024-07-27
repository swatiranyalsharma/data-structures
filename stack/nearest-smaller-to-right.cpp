//nearest small number to the right
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    stack<int> myStack;
    vector<int> myVector;
    int a[4] = {2, 4, 3, 2};
    for(int i=3;i>=0;i--){
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
    reverse(myVector.begin(), myVector.end());
    for(const int& i: myVector){
      cout<<i<<" ";
    }
    return 0;
}