/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/14 23:37:07 by syusof            #+#    #+#             */
/*   Updated: 2015/11/18 23:33:15 by syusof           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "minishell.h"



# include <stdio.h>

int		main(int ac,char **av,char ** env)
{
	char	**tab;
	char	*stmp;
	int		i;

	tab = NULL;
	stmp = NULL;
	tab = ft_strsplit(env[0],':');
	tab[0] = ft_strrchr(tab[0],'=');
	tab[0] = tab[0] + 1;
	i = 0;
	while(tab[i])
	{
		stmp = ft_strjoin(tab[i],"/");
		stmp = ft_strjoin(stmp,"ls");
		printf("%s\n",stmp);
		execve(stmp,av,env);
		i++;
	}
	return (0);
}
