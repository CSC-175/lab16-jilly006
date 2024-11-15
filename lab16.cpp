// Code to implement the gcf function goes here

int gcf(int a, int b) {
    // Base case: if b is 0, the GCF is a
    if (b == 0) {
        return a;
    }
    // Recursive case: GCF(a, b) = GCF(b, a % b)
    return gcf(b, a % b);
}