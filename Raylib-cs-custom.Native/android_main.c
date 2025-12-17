#if defined(PLATFORM_ANDROID)
#include <stdlib.h>
#include <unistd.h>

typedef void (*rlAndroidMainCallback)();
static rlAndroidMainCallback androidCallback = NULL;

__attribute__((visibility("default"))) __attribute__((used))
void rlSetAndroidMain(rlAndroidMainCallback callback) {
    androidCallback = callback;
}

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;
    while (androidCallback == NULL) {
        usleep(100000);
    }
    androidCallback();
    return 0;
}
#endif