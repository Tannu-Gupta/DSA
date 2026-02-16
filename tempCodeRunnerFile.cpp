

//     // s.insert(1);
//     // s.insert(2);
//     // s.insert(3);

//     cout << "lower bound = " << *(s.lower_bound(3)) << endl; //3
//     cout << "upper bound = " << *(s.upper_bound(3)) << endl;
//     cout << s.size() << endl; //5

//     for(auto val : s){
//         cout << val << " "; 
//     }
//     cout << endl;

//     return 0;
// }


                //Multi Set//

// int main(){
//     multiset<int> s;

//     s.insert(1);
//     s.insert(2);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);

//     s.insert(1);
//     s.insert(9);
//     s.insert(3);

//     for(auto val : s){
//         cout << val << " "; 
//     }
//     cout << endl;

//     return 0;
// }

                //Unordered Set// (Random order)

int main(){
    unordered_set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    s.insert(1);
    s.insert(9);
    s.insert(3);