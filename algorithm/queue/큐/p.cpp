#include <iostream>
#include <string>

using namespace std;

int idx = -1;
int queue[10004];

void push(int x){
    queue[++idx] = x;
}

void pop(){
    if(idx == -1) {
        cout << -1 << "\n";
        return;
    }
    
    cout << queue[0] << "\n";

    for(int i = 1; i <= idx; ++i){
        queue[i - 1] = queue[i];
    }

    queue[idx--] = 0;
}

void size(){
    cout << (idx + 1) << "\n";
}

int empty(){
    if(idx == -1) return 1;
    else return 0;
}

void front(){
    if(idx == -1) cout << -1 << "\n";
    else cout << queue[0] << "\n";
}

void back(){
    if(idx == -1) cout << -1 << "\n";
    else cout << queue[idx] << "\n";
}

int main(){
    freopen("p.txt", "rt", stdin);

    int n;
    string op;
    cin >> n; cin.ignore();
    while(n--){
        getline(cin, op);

        if(op.find("push") != string::npos){
            string n = op.substr(5);
            int val = stoi(n);
            push(val);
        }

        if(op.find("pop") != string::npos){
            pop();
        }

        if(op.find("size") != string::npos){
            size();
        }

        if(op.find("empty") != string::npos){
            cout << empty() << "\n";
        }

        if(op.find("front") != string::npos){
            front();
        }

        if(op.find("back") != string::npos){
            back();
        }
    }
}