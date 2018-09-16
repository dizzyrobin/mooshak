#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(int num) {
    string str = to_string(num);
    int len = str.length();
    int lastElem = len - 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[lastElem - i]) {
            return false;
        }
    }

    return true;
}

bool is_prime(int num) {
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main(void) {
    int n;
    do {
        cin >> n;
        cout << (n * 2) << endl;
    } while (!is_palindrome(n) || !is_prime(n));

    return 0;
}
