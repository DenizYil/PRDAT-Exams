// micro-C example 01 for January 2021 exam
// Testing conditional expression as lvalue.
void main() {
    int x;
    x = 1;

    int z;
    z = 5;

    int *y;
    y = &x;

    int *y2;
    y2 = &z;

    (x < z ? *y2 : *y) = 3;
    (x < z ? *y2 : *y) = 4;

    print *y; println; // Expected 3
    print *y2; println; // Expected 4
}
