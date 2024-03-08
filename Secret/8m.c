#include <stdio.h>
#include <windows.h>
#include <process.h>

void printSlowly(const char *text, unsigned int delay_ms) {
    while (*text) {
        putchar(*text++);
        fflush(stdout);
        Sleep(delay_ms);
    }
}

void playMelody(void* data) {
    int melody[] = {262, 294, 330, 262, 330, 349, 330, 349, 392, 330, 392, 440, 392, 440, 494, 392, 523, 494, 523, 587, 494, 587, 659};
    int melodyLength = sizeof(melody) / sizeof(melody[0]);
    for (int i = 0; i < melodyLength; i++) {
        Beep(melody[i], 500);
        Sleep(100);
    }
}

int main() {
    _beginthread(playMelody, 0, NULL);

    printf("         ,            __ \\/ __\n");
    printSlowly("     /\\^/`\\          /o \\{}/ o\\   If I had a flower for each time\n", 9);
    printSlowly("    | \\/   |         \\   ()   /     I thought of you, my garden\n", 9);
    printSlowly("    | |    |          `> /\\ <`   ,,,     would be full... <3\n", 9);
    printSlowly("    \\ \\    /  @@@@    (o/\\/\\o)  {{{}}                 _ _\n", 9);
    printSlowly("     '\\\\//'  @@()@@  _ )    (    ~Y~       @@@@     _{ ' }_\n", 9);
    printSlowly("       ||     @@@@ _(_)_   wWWWw .oOOo.   @@()@@   { `.!.` }\n", 9);
    printSlowly("       ||     ,/  (_)@(_)  (___) OO()OO    @@@@  _ ',_/Y\\_,'\n", 9);
    printSlowly("       ||  ,\\ | /)  (_)\\     Y   'OOOO',,,(\\|/ _(_)_ {_,_}\n", 9);
    printSlowly("   |\\  ||  |\\\\|// vVVVv`|/@@@@    _ \\/{{}}}}\\| (_)@(_)  |  ,,,\n", 9);
    printSlowly("   | | ||  | |;,,,(___) |@@()@@ _(_)_| ~Y~ wWWWw(_)\\ (\\| {{{}}\n", 9);
    printSlowly("   | | || / / {{}}} Y  \\| @@@@ (_)#(_) \\|  (___)   |  \\| /~Y~\n", 9);
    printSlowly("    \\ \\||/ /\\\\|~Y~ \\|/  | \\ \\/  /(_) |/ |/   Y    \\|/  |//\\|/\n", 9);
    printSlowly("\\ `\\\\//`,.\\|/|//.|/\\\\|/\\\\|,\\|/ //\\|/\\|.\\\\\\| // \\|\\\\ |/,,\\|/\n", 9);
    printSlowly("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^  \n", 9);
    printSlowly("\tHappy March 8 International Women's Day,My Love\n", 9);
    printSlowly("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^  \n", 9);

    Sleep(2000);
    return 0;
}
