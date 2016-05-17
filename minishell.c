/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/14 23:37:07 by syusof            #+#    #+#             */
/*   Updated: 2016/05/17 15:54:10 by syusof           ###   ########.fr       */
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
//		execve(stmp,av,env);
		execve("/bin/ls",av,env);
		i++;
	}
	return (0);
}
