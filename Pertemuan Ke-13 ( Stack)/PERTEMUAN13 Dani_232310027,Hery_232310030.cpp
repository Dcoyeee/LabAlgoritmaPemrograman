#include <iostream>
#include <stack>
using namespace std;

struct function {
    int n;
    int result;
    bool calculated;

    function(int num) : n(num), result(0), calculated(false) {}
};

int recursive(int n, stack<function>& call);

void print(int n, stack<function>& call) {
    for (int i = 0; i < n; ++i) {
        int result = recursive(i, call);
        cout << result << " ";
    }
    cout << endl;
}

int recursive(int n, stack<function>& call) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    while (call.size() > 0 && call.top().n != n) {
        call.pop();
    }

    if (call.size() > 0 && call.top().calculated) {
        return call.top().result;
    }

    int result = recursive(n - 1, call) + recursive(n - 2, call);

    call.push(function(n));
    call.top().result = result;
    call.top().calculated = true;

    return result;
}

int main() {
    stack<function> call;  
    int n;

    cout << "Enter the number of Fibonacci terms : ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative integer.\n";
        return 1;
    }

    int result = recursive(n, call);  

    cout << "\nFibonacci sequence up to " << n << " terms: \n";
    print(n, call);  
    return 0;
}

