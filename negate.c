int main() {

    int array[] = { 1, -2, 5, -6, 2 };
    
    for(int i=0; i < 5; i++) {
        if (array[i] < 0) {
            array[i] = 0 - array[i];
        }
    }
    return 0;
}
