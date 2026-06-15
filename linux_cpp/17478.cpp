#include <bits/stdc++.h>
using namespace std;
    int n;
void print(const char *str,int n) {
    for(int i=0; i<n; i++) cout << "____";
    cout << str;
}

void fun(int cnt) {
    print("재귀함수는 뭔가여?\n",cnt);
    if(n==cnt) {
        print("재귀함수는 자기자신을 호출해\n",cnt);
    } else{
        print("잘들어 ... 선비가 물었어\n",cnt);
        fun(cnt+1);
    }
    print("라고 답함\n",cnt);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    cout << "어느 한 컴 학생이 교수님을 찾아사 물었다.\n";
    fun(0);
    return 0;
}


