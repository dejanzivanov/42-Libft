/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 12:57:30 by dzivanov          #+#    #+#             */
/*   Updated: 2021/05/22 13:11:52 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *str, char delimiter)
{
	int	i;
	int	counter;

	if (str == 0 || delimiter == 0)
	{
		return (0);
	}
	i = 1;
	counter = 0;
	if (str[0] != delimiter)
		counter++;
	while (str[i] != '\0')
	{
		if (str[i] != delimiter && str[i - 1] == delimiter)
			counter++;
		i++;
	}
	return (counter);
}

int	ft_get_next_word(char const *str, char delimiter, unsigned int j)
{
	int	counter;

	counter = 0;
	while (str[j] == delimiter && str[j] != '\0')
		j++;
	while (str[j] != '\0' && str[j] != delimiter)
	{
		counter++;
		j++;
	}
	return (counter);
}

static char	**ft_temp_point(char **temp, int wrds_len, char const *str, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	j = 0;
	k = 0;
	i = 0;
	while (i < (unsigned int)wrds_len)
	{
		j = 0;
		temp[i] = (char *)malloc(ft_get_next_word(str, c, k) + 1);
		while (str[k] != '\0' && str[k] == c)
			k++;
		while (str[k] != '\0' && str[k] != c)
		{
			temp[i][j] = str[k];
			j++;
			k++;
		}
		temp[i][j] = '\0';
		i++;
	}
	temp[i] = 0;
	return (temp);
}

char	**ft_split(char const *str, char delimiter)
{
	char	**temp;
	int		words_nbr;

	if (*str == 0)
	{
		temp = (char **)malloc(sizeof(char *));
		*temp = NULL;
		return (temp);
	}
	words_nbr = ft_count_words(str, delimiter);
	temp = (char **)malloc(sizeof(*temp) * (words_nbr + 1));
	if (!temp)
		return (0);
	temp = ft_temp_point(temp, words_nbr, str, delimiter);
	return (temp);
}

/*
**	Allocates (with malloc(3)) and returns an array of strings obtained by
**	splitting ’s’ using the character ’c’ as a delimiter. The array must be
**	ended by a NULL pointer.
**
**	The array of new strings resulting from the split.
**	NULL if the allocation fails.
**
**	#1. The string to be split.
**	#2. The delimiter character.
**
**	ft_split function is created in a such a way, that memory allocation, and
**	delimiter check is performed few times.
**
**	1) First memory allocation is done if the string is null, we return empty
**	character pointer.
**
**	2) If the pass parameter const str is not empty, we count the number of
**	words that are contained within that string with following delimiter.
**	and allocated number of words + 1 to that pointer which will contain words.
**
**	3) if the memory allocation was successfull, then letter counting is done
**	within the ft_temp_point we create new pointers and allocate memory for each
**	letter and then pass that pointer to a double temp pointer, and in the end
**	we put the NULL terminator at the end of the pointer and return it.
*/