#include "../src/main.h"
#include <assert.h>

void testGetTriangleType() {
    assert(getTriangleType(3, 4, 5) == 0);
}

void testsub(){
    assert(sub(5,3)==(2));
}
int main() {
    assert(addNumber(5, 2) == 7);
    testGetTriangleType();
    testsub();
    return 0;
}
