#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0; // 다음에 원소가 추가될 때 삽입해야하는 곳을 가리킴. 스택의 길이. 스택 내의 원소의 수를 의미

void push(int x){ // 스택에 x를 추가하는 함수
    dat[pos++] = x;
}

void pop(){ // 스택의 꼭대기에 위치한 원소를 제거하는 함수
    pos--;
}

int top(){ // 스택의 꼭대기에 위치한 원소의 값을 확인하는 함수
    return dat[pos-1];
}

void test(){
    push(5); push(4); push(3);
    cout << top() << '\n'; // 3
    pop(); pop();
    cout << top() << '\n'; // 5
    push(10); push(12);
    cout << top() << '\n'; // 12
    pop();
    cout << top() << '\n'; // 10
}

int main(void) {
    test();
}