/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoncalv <kaykegy@proton.me>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:03:02 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/06/23 14:29:07 by kgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *restrict dest, const char *src)
{
    int x = 0;
    while (src[x] != '\0')
    {
        x++;
        dest[x] = src[x];
    }
    dest[x] = '\0'
    return (x);
}

int main(void)
{
  int array[] = "";
  int arrar_src[] = "teste";

  int x = 0;
  printf("%s", ft_strlen(array, arrar_src));
}
