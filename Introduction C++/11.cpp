#include <iostream>

// Function to calculate the sum of numbers from 1 to N
int sumNumbers(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    return sum;
}

// Function to calculate the sum of even numbers from 2 to N
int sumEvenNumbers(int N) {
    int sum = 0;
    for (int i = 2; i <= N; i += 2) {
        sum += i;
    }
    return sum;
}

// Function to calculate the sum of odd numbers from 3 to N
int sumOddNumbers(int N) {
    int sum = 0;
    for (int i = 3; i <= N; i += 2) {
        sum += i;
    }
    return sum;
}

// Function to calculate the sum of factorials from 1! to N!
int sumFactorials(int N) {
    int sum = 0;
    int factorial = 1;
    for (int i = 1; i <= N; i++) {
        factorial *= i;
        sum += factorial;
    }
    return sum;
}

int main() {
    int N;
    std::cout << "Enter a positive integer N: ";
    std::cin >> N;
    
    // Calculate and display the sum of numbers from 1 to N
    int sum1 = sumNumbers(N);
    std::cout << "Sum of numbers from 1 to N: " << sum1 << std::endl;
    
    // Calculate and display the sum of even numbers from 2 to N
    int sum2 = sumEvenNumbers(N);
    std::cout << "Sum of even numbers from 2 to N: " << sum2 << std::endl;
    
    // Calculate and display the sum of odd numbers from 3 to N
    int sum3 = sumOddNumbers(N);
    std::cout << "Sum of odd numbers from 3 to N: " << sum3 << std::endl;
    
    // Calculate and display the sum of factorials from 1! to N!
    int sum4 = sumFactorials(N);
    std::cout << "Sum of factorials from 1! to N!: " << sum4 << std::endl;
    
    return 0;
}
