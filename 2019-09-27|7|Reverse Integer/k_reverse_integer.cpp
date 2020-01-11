#include <iostream>

int input = 120;

int reverse(int x) {
    int result = 0;
    int quotient = x;
    int reminder = 0;
    do{
        reminder = quotient % 10;
        quotient = quotient / 10;
        if (result > INT_MAX/10 || (result == INT_MAX / 10 && quotient > 7)) return 0;
        if (result < INT_MIN/10 || (result == INT_MIN / 10 && quotient < -8)) return 0;
        result = result * 10 + reminder;
    }while((abs(quotient) > 0));
    return result;
}

int main() {
    reverse(input);
    return 0;
}
