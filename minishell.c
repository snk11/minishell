/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/14 23:37:07 by syusof            #+#    #+#             */
/*   Updated: 2016/05/17 16:44:20 by syusof           ###   ########.fr       */
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
	i = 0;
	while (env[i])
		i++;
	printf("%s\n",env[0]);
	tab = (char**)malloc(sizeof(char*)*i+1);
	tab[i] = NULL;
	tab[0] = (char*)malloc(sizeof(char) * ft_strlen(env[0]));
	i = 0;
	while (env[0][i])
	{
		tab[0][i] = env[0][i];
		i++;
	}
	printf("%s\n",tab[0]);
//	tab = ft_strsplit(env[0],':');
//	tab[0] = ft_strrchr(tab[0],'=');
//	tab[0] = tab[0] + 1;
	i = 0;
	while(tab[i])
	{
//		stmp = ft_strjoin(tab[i],"/");
//		stmp = ft_strjoin(stmp,"ls");
//		printf("%s\n",stmp);
//		execve(stmp,av,env);
		execve("/bin/ls",av,env);
		i++;
	}
	return (0);
}
