/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syusof <syusof@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/14 23:37:07 by syusof            #+#    #+#             */
/*   Updated: 2016/05/24 16:50:40 by syusof           ###   ########.fr       */
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
	if(av[1] && ft_strcmp(av[1],"exit") == 0)
		exit(3);
	while (env[i])
		i++;
	printf("%s\n",env[0]);
	tab = (char**)malloc(sizeof(char*)*i+1);

	tab[i] = NULL;
	tab[0] = (char*)malloc(sizeof(char) * ft_strlen(env[0]));
	ft_memmove(tab[0],env[0],ft_strlen(env[0]));
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
