/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 06:02:59 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/11 06:11:12 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*"jhfn\tvgp\nlmjg   jpä sdspälfä lkk \0"      "wtf omg lol\0" //TODO: check double spaces

"jhfn\0" "vpg\0" "lmjg\0" ... "0\0"*/

int word_counter(char *str) //6
{
	int index;
	int count;
	int word_index;

	index = 0;
	word_index = 0;
	count = 1;
	while (str[index] != '\0') //doesnt handles extre spaces
	{
		if (str[index] == '\t' || str[index] == '\n' || str[index] == '\0' || str[index] == ' ')
		{
			word_index = 0;	
			count++;
		}
		index++;

	}
	return (count);
}
 
int *array_of_indexes(char *str)  //4|4|5...|'\0'
{
	int index;
	int count;
	int word_index;
	int *array;
	int total_words;
	
	total_words = word_counter(str); //6
	array = (int *)malloc(sizeof(int) * (total_words + 1));
	index = 0;
	word_index = 0;
	count = 0; //jhfn\tvgp\nlmjg\tjpä\nsdspälfä\nlkk"
	while (str[index] != '\0')
	{
		if (str[index] == '\t' || str[index] == '\n' || str[index] == '\0' || str[index] == ' ')
		{
			array[count] = word_index; //4
			word_index = 0;	
			count++;
			index++; // skips white space
		}
		index++;
		word_index++;
	}
	index++;
	array[index] = '\0';
	return (array);
}


/*
char	**ft_split_whitespaces(char *str)
{
	int 	index;
	int 	current_word_len;
	int 	total_words;
	char 	*word;
	int		counter;

	counter = 0;
	total_words = 
	indexes_values = array_of_indexes(str); // 3|5|6...|'\0' 
	
	result = (char *)malloc(sizeof(char) * total_words)
	
	while (total_words[index] != '\0')
	{
		
		
	}

}*/

int		main(void)
{
	//char *phrase[] = "jhfn\tvgp\nlmjg jpä sdspälfä lkk"
	int *a;
	int words;
	int index;

	index = 0;
	words = word_counter("jhfn vgp lmjg\tjpa sdspalfa\tlkk"); //6
	a = array_of_indexes("jhfn vgp lmjg\tjpa sdspalfa\tlkk");
	while (index < words)
	{
		printf("%i", a[index]);
		index++;
	}
	//printf("%i ", words); //testing word counter <= 6

	return 0;
}

