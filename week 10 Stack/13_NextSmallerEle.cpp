// Next Smaller element 
// find the element smaller than current standing element and push track it
// if you don't find any smaller element than current then consider -1
// Note the first element of the stack will be -1

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextSmallerElement (vector<int>& v) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(s.size());
    
    for(int i=v.size()-1; i>=0; i--) {

        int curr = v[i];
        while(s.top() >= curr) {
            s.pop();
        }

        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}

int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);

    cout << "Printing elements : " << endl;
    vector<int> ans = nextSmallerElement(v);
    for(int i=0; i<v.size(); i++) {
        cout << ans[i] << " ";
    }
}