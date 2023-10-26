// Next Smaller element 
// find the element smaller than current standing element and push track it
// if you don't find any smaller element than current then consider -1
// Note the first element of the stack will be -1

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);

    stack<int> s;
    s.push(-1);                         // stack ka pehla element -1 h

    vector<int> ans(v.size());
    for(int i = v.size()-1; i>=0; i--) {     // start from last element
        int curr = v[i];
        while(s.top() >= curr) {
            s.pop();
        }

        ans[i] = s.top();           // if no small element than curr ele then -1 will come, since it is smaller than all elements
        s.push(curr);               // push to find the smaller element for next smaller element
    }

    cout << "Answer array : ";
    for(int i=0; i<ans.size(); i++)
        cout << ans[i] << " ";
}