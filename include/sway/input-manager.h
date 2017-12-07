#ifndef _SWAY_INPUT_MANAGER_H
#define _SWAY_INPUT_MANAGER_H
#include <libinput.h>
#include "sway/server.h"
#include "config.h"
#include "list.h"

struct sway_input_manager {
	struct wl_listener input_add;
	struct wl_listener input_remove;
	struct sway_server *server;
	list_t *seats;
};

struct input_config *new_input_config(const char* identifier);

char* libinput_dev_unique_id(struct libinput_device *dev);

struct sway_input_manager *sway_input_manager_create(
		struct sway_server *server);

#endif
