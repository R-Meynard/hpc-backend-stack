#include <iostream>
#include "../include/buffer.hpp"

int main(){
    /**========================================================================= */
    // Instanciation of an object from the Buffer class to test the buffer without parameters
    Buffer objBuffer;
    /**========================================================================= */
    // Instanciation of the buffer1 object from the Buffer class to test the constructor with parameters
    int sizeBuffer1 = 10;
    int *buffer1 = new int[sizeBuffer1];
    // Initialization  of the buffer1
    for(int ii = 0; ii < sizeBuffer1; ii++){
        buffer1[ii] = 3*ii+7;
    }
    Buffer objBuffer1(buffer1, sizeBuffer1);
    /**========================================================================= */
    // Test the constructor by copy with both objBuffer and buffer1
    Buffer buffer2(objBuffer1);

    /**========================================================================= */
    // Test the assignment operator (Rule of Three)
    int sizeBuffer3 = 10;
    int *buffer3 = new int[sizeBuffer3];
    // Initialization  of the buffer1
    for(int ii = 0; ii < sizeBuffer3; ii++){
        buffer3[ii] = 3*ii+5*ii+4;
    }
    Buffer objBuffer3(buffer3, sizeBuffer3);
    Buffer objBuffer4;
    objBuffer4.operator=(objBuffer3);

    delete[] buffer1;
    delete[] buffer3;
    return 0;
}