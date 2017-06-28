#include <stdlib.h>
#include <stdio.h>
#include "deck.h"

/**
 * print_deck - prints
 */
void print_deck(const deck_node_t *deck)
{
	const char *kinds[] = {
		"S", "H", "C", "D"
	};
	const card_t *c;

	while (deck)
	{
		c = deck->card;
		printf("{%s, %s}, ", c->value, kinds[c->kind]);
		deck = deck->next;
	}
	printf("\n");
}
