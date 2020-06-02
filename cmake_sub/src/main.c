#include <lws_config.h>
#include <libwebsockets.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    (void) argc;
    (void) argv;

    printf("compiled against: libwebsockets v%s\n", LWS_LIBRARY_VERSION);
    printf("running  against: libwebsokcets v%s\n", lws_get_library_version());

    return EXIT_SUCCESS;
}