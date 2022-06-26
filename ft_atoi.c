/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:28:53 by taboterm          #+#    #+#             */
/*   Updated: 2022/06/25 17:32:10 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The atoi() A to I function converts the initial portion of 
the string pointed to by str to int representation. Can hold positive
and negative variables*/

int	ft_atoi(const char *str)
{
	signed long long int	res;
	int						sign;
	int						i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}

/*int	main(void)
{
 	printf("The maximum value of LONG = %ld\n", LONG_MAX);
	char	string[] = "-2147483647";
  	printf("return is:%d\n", ft_atoi(string));
 	printf("original is:%d\n", atoi(string));
  	return (0);
}*/