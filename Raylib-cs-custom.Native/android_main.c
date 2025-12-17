#if defined(PLATFORM_ANDROID)
#include <stdlib.h>

typedef void (*rlAndroidMainCallback)();
static rlAndroidMainCallback androidCallback = NULL;

void rlSetAndroidMain(rlAndroidMainCallback callback) {
    androidCallback = callback;
}

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;
    while (androidCallback == NULL) {
    }
    androidCallback();
    return 0;
}
#endif