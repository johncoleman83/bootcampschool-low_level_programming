#include "deck.h"

/**
 * sort_deck - sorts input deck
 * @deck: the deck of cards to be sorted
 */
void sort_deck(deck_node_t **deck)
{
	deck_node_t *pn, *tmp, *nn;

	if (deck && *deck && (*deck)->next)
	{
		tmp = (*deck)->next;
		pn = tmp->prev;
		nn = tmp->next;

		while (tmp)
		{
			if (pn->card->kind > tmp->card->kind ||
				(pn->card->kind == tmp->card->kind &&
				 gtr(pn->card->value, tmp->card->value)))
			{
				swap_cards(pn, tmp, nn, deck);
			}
			tmp = nn;
			if (tmp)
			{
				nn = tmp->next;
				pn = tmp->prev;
			}
		}
	}
}
/**
 * swap_cards - swaps cards with insertion sort fasion
 * @pn: the previous node to swap
 * @tmp: the temporary node to swap with previous
 * @nn: the next node
 * @deck: the head of deck
 */
void swap_cards(deck_node_t *pn, deck_node_t *tmp, deck_node_t *nn,
				deck_node_t **deck)
{
	while (pn && (pn->card->kind > tmp->card->kind ||
				  (pn->card->kind == tmp->card->kind &&
				   gtr(pn->card->value, tmp->card->value))))
	{
		/* handle next node */
		if (nn)
			nn->prev = pn;

		/* handle temp node */
		tmp->next = pn;
		tmp->prev = pn->prev;

		/* handle prev node */
		if (pn->prev)
			(pn->prev)->next = tmp;
		pn->prev = tmp;
		pn->next = nn;

		/* reset comparison values */
		nn = pn;
		pn = tmp->prev;
		if ((*deck)->prev)
			*deck = (*deck)->prev;
	}

}


/**
 * gtr - returns true if first val is greater than second else false
 * @pval: prvious val
 * @tval: temp val
 * Return: True or False
 */
int gtr(const char *pval, const char *tval)
{
	static const char * const values[] = {
		"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10",
		"Jack", "Queen", "King", NULL
	};
	int prank, trank;

	for (prank = 0; values[prank]; prank++)
		if (_strcmp(pval, values[prank]) == 0)
			break;

	for (trank = 0; values[trank]; trank++)
		if (_strcmp(tval, values[trank]) == 0)
			break;

	return (prank > trank);
}

/**
 * _strcmp - compares string
 * @s1: first string
 * @s2: second string
 * Return: difference between two ascii values
 */
int _strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;

	while (1 == 1)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);

		if (s1[i] == '\0' || s2[i] == '\0')
			break;

		i++;
	}

	return (0);
}
