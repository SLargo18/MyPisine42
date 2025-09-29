/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salargo- <salargo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 08:00:27 by salargo-          #+#    #+#             */
/*   Updated: 2025/09/01 11:29:06 by salargo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;

	if (argc != 1)
	{
		argc -= 1;
		while (argc > 0)
		{
			j = 0;
			while (argv[argc][j])
				write(1, &argv[argc][j++], 1);
			write(1, "\n", 1);
			--argc;
		}
	}
	return (0);
}
