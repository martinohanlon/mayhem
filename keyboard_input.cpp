#include "keyboard_input.h"

void get_control_input(int nbplayers, struct command* cmds)
{
	for (int player = 0; player < nbplayers; player++)
	{
		if (cmds[player].control_type == CONTROL_KEY)
		{
			get_key_input(&cmds[player]);
		}
	}	
}

void get_key_input(struct command *cmd)
{
	struct mapping_key* keymap = cmd->keymap;
	cmd->left = key[keymap->left];
	cmd->right = key[keymap->right];
	cmd->shield = key[keymap->shield];
	cmd->fire = key[keymap->fire];
	cmd->thrust = key[keymap->thrust];
}