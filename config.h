#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER "  "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(cmd, interval, signal).
#define BLOCKS(X)         \
    X("sb-music", 10, 1)   \
    X("sb-disk", 1800, 3) \
    X("sb-memory", 10, 4) \
    X("sb-volume", 0, 5)  \
    X("sb-kbselect", 0, 6) \
    X("sb-battery", 10, 7) \
    X("sb-clock", 60, 8)

#endif  // CONFIG_H
