/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 05:25:41 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/11 05:42:13 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>//??

using namespace std;
char	*mystrtok(char *s, char d)
{
	char* result;
	int i = 0;

	if (s == NULL)
		return NULL;
    // Stores the extracted string
	 = new char[strlen(input) + 1];
	
    // Start extracting string and
    // store it in array
	for (; input[i] != '\0'; i++)
	{
        // If delimeter is not reached
        // then add the current character
        // to result[i]
		if (input[i] != d)
			result[i] = input[i];
        // Else store the string formed
		else
		{
			result[i] = '\0';
			input = input + i + 1;
			return result;
		}
	}

    // Case when loop ends
	result[i] = '\0';
	input = NULL;

    // Return the resultant pointer
    // to the string
	return result;
}

// Driver Code
int main()
{
	char str[90] = "It, is my, day";

	char* ptr = mystrtok(str, ' ');

    // Print current tokenized string

    // While ptr is not NULL
	while (ptr != NULL)
	{
        // Tokenize the string
		ptr = mystrtok(NULL, ' ');

        // Print the string

	}
	return 0;
}