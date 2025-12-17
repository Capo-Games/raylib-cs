#if defined(PLATFORM_ANDROID)
#include <stdlib.h>

extern void RaylibAndroidEntry();

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;
    RaylibAndroidEntry();
    return 0;
}
#endif