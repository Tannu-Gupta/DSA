#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int getCelebrity(vector<vector<int>> arr) {
    stack<int> s;
    for(int i=0; i<arr.size(); i++) {
        s.push(i);
    }

    while(s.size() > 1) {
        int i = s.top();
        s.pop();
        int j = s.top();
        s.pop();

        if(arr[i][j] == 1) {
            s.push(j);
        } else {
            s.push(i);
        }

        int celeb = s.top();
        for(int i=0; i<arr.size(); i++) {
            if(i != celeb) {
                if(arr[celeb][i] == 1 || arr[i][celeb] == 0) {
                    return -1;
                }
            }
        }
    }
    return s.top();


}

int main() {
    vector<vector<int>> arr = { {0,1,0}, {0,0,0}, {0,1,0} };

    int ans = getCelebrity(arr);

    cout << "Celebrity is: " << ans << endl;
    return 0; 
}
