int array[] = { 1, -2, 5, -6, 2 };

int main() {

    if(array[0] < 0) {
        array[0] = 0 - array[0];
    }

    if(array[1] < 0) {
        array[1] = 0 - array[1];
    }

    if(array[2] < 0) {
        array[2] = 0 - array[2];
    }

    if(array[3] < 0) {
        array[3] = 0 - array[3];
    }
    
    if(array[4] < 0) {
        array[4] = 0 - array[4];
    }

    return 0;
}
