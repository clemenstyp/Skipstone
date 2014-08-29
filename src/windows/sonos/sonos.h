
#pragma once
#include "../../common.h"

void sonos_init(Player p);
void sonos_destroy(void);
void sonos_in_received_handler(DictionaryIterator *iter);
void sonos_out_sent_handler(DictionaryIterator *sent);
void sonos_out_failed_handler(DictionaryIterator *failed, AppMessageResult reason);
