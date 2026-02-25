 #include <iostream>
#include <vector>
#include <stack>
using namespace std;

       //O(n) time and O(n) space
int main() {
    //stack prices
    vector<int> price = {100, 80, 60, 70, 60, 75, 85};

    //solutions
    vector<int> ans;
    stack<int> s;

    for(int i=0; i<price.size(); i++){
        while(s.size() > 0 && price[s.top()] <= price[i]) {
            s.pop();
        }

        if(s.size() == 0) {
            ans.push_back(i+1);
        } else {
            ans.push_back(i - s.top());  //i-prevHigh

        }
        s.push(i);

    }

    //print ans values
    for(int val : ans){
        cout << val << " ";
    }
    cout << endl;


    return 0;
}