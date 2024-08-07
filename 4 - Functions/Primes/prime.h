// Function to check if a number is prime:
int is_prime(int x) {
    int q, isComposite = 0;

    for (q = 2; q < x; q++) {
        if (x % q == 0) {    // If x is divisible by q without a remainder,
            isComposite = 1; // set the isComposite flag to 1.
            break;
        }
    }

    return isComposite; // Return 1 if the number is composite, 0 if it's prime.
}

// Function to verify if a number is prime:
int check_if_prime(int num) {
    int i;

    if (num == 0 || num == 1) {
        return 1; // 0 and 1 are not prime, so return 1 to indicate they are not prime.
    }

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            return 1; // If the number is divisible by any value from 2 to num-1, it's not prime.
        }
    }

    if (i == num) {
        return 0; // If no divisors were found in the loop, the number is prime.
    }
}
