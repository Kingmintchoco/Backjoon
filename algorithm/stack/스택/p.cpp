#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int idx = -1;
int stack[100000000];

void push(int x){
    stack[++idx] = x;
}

void pop(){
    if(idx == -1) {
        cout << -1 << "\n";
        return;
    }

    cout << stack[idx] << "\n";
    stack[idx--] = 0;
}

void size(){
    cout << (idx + 1) << "\n";
}

int empty(){
    if(idx == -1) return 1;
    else return 0;
}

void top(){
    if(idx == -1){
        cout << -1 << "\n";
        return;
    }

    cout << stack[idx] << "\n";
}

int main(){
    freopen("p2.txt", "rt", stdin);

    int n;
    string op;

    cin >> n;   cin.ignore();
    while(n--){
        getline(cin, op);

        // push
        if(op.find("push") != string::npos){
            string tmp = op.substr(5);
            int val = stoi(tmp);
            push(val);
        }

        // pop
        if(op.find("pop") != string::npos){
            pop();
        }

        // size
        if(op.find("size") != string::npos){
            size();
        }

        // empty
        if(op.find("empty") != string::npos){
            cout << empty() << "\n";
        }

        // top
        if(op.find("top") != string::npos){
            top();
        }
    }
}