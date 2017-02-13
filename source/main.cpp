#include <3ds.h>
#include <stdio.h>

int main(int argc, char **argv) {
    gfxInitDefault();
    consoleInit(GFX_TOP, NULL);

	printf("3DS Test");

	printf("\x1b[20;15HPress Start to succ");

    while(aptMainLoop()) {
        gspWaitForVBlank();
        hidScanInput();

        if(hidKeysDown() & KEY_START)
            break;

        gfxFlushBuffers();
        gfxSwapBuffers();
    }

    gfxExit();
    return 0;
}
