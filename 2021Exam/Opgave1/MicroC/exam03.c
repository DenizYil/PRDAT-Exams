void main() {
    int arr[2];
    arr[0] = 1;
    arr[1] = 2;


    (arr[0] < arr[1] ? arr[0] : arr[1]) = 3;
    (arr[0] < arr[1] ? arr[0] : arr[1]) = 4;

    print arr[0]; println; // Expected 3
    print arr[1]; println; // Expected 4
}
