/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osabir <osabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:57:36 by osabir            #+#    #+#             */
/*   Updated: 2023/01/17 16:21:33 by osabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main (void)
{
	int	p;
	int	w;

	p = 0;
	w = 104;
	while (p == 48)
	{
		if (w)
		{
			write(1, &w, 1);
			w -= 3;
			if (w)
			{
				write(1, &w, 1);
				w += 7;
				if (w)
				{
					write(1, &w, 1);
					write(1, &w, 1);
					w += +3;
					if (w)
					{
						write(1, &w, 1);
						w -= 79;
						if (w)
						{
							write(1, &w, 1);
							w += 87;
							if (w)
							{
								write(1, &w, 1);
								w -= 8;
								if (w)
								{
									write(1, &w, 1);
									w += 3;
									if (w)
									{
										write(1, &w, 1);
										w -= 6;
										if (w)
										{
											write(1, &w, 1);
											w -= 8;
											if (w)
											{
												write(1, &w, 1);
												w -= 67;
												if (w)
												{
													write(1, &w, 1);
													w -= 23;
													if (w)
													{
														p = 1;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
