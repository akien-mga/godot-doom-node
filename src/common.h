#ifndef COMMON_H
#define COMMON_H

#include <stdbool.h>
#include <stdint.h>

#include <doomgeneric/doomgeneric.h>

#define GDDOOM_SPAWN_SHM_NAME "/doom"

typedef struct SharedMemory {
	uint32_t screen_buffer;
	char keys_pressed[100];
	uint32_t sleep_ms;
	bool ready;
} SharedMemory;

#endif
