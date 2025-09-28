int main() {
    int x = 3, y = 0, start, end;
    start = 2;   // ** s is last digit of your id**
    end = 2+4;  // ** e is last second digit of your id**
    // Loop structure
    for (int i = start; i < end; i++) {
        y += i; // Increment y by i

        // if-else-if-else structure
        if (x > y) {
            printf("Iteration %d: x is greater than y\n", i);
        } else if (x == y) {
            printf("Iteration %d: x is equal to y\n", i);
        } else {
            printf("Iteration %d: x is less than y\n", i);
        }
    }

    return 0;
}

