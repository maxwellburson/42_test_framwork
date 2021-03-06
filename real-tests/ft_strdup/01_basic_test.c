/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphan <aphan@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 21:26:36 by aphan             #+#    #+#             */
/*   Updated: 2017/02/13 21:41:29 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_strdup.h>

int		ft_strdup_01_basic_test(void)
{
	int		result;

	result = 0;
	result += strcmp("meow", ft_strdup("meow")) ? 1 : 0;
	result += strcmp("woofwoof", ft_strdup("woofwoof\0woof")) ? 1 : 0;
	return (result ? -1 : 0);
}
