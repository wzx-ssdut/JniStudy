#include "Hello.h"

#include <iostream>

JNIEXPORT void JNICALL Java_wzx_ssdut_Hello_hello(JNIEnv* env, jclass cls) {
    std::cout << "Hello from JNI.\n";
}
