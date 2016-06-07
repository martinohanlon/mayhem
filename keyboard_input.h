#ifndef __KEYBOARD_INPUT_H_
#define __KEYBOARD_INPUT_H_

#include "command.h"
#include "mapping_key.h"

void get_input_clavier(int nbmapping,struct mapping_key* keymap);

void get_control_input(int nbplayers, struct command* cmds);

void get_key_input(struct command *cmd);

#endif