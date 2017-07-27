#include "petest.h"

bool petest_ispe(const unsigned char *b) {
    return (b[0] == 0x4d && b[1] == 'Z');
}
