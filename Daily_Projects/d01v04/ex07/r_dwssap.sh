# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    r_dwssap.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/23 01:51:35 by jnawrock          #+#    #+#              #
#    Updated: 2019/10/23 10:03:09 by jnawrock         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cat /etc/passwd | sed '/#.*/d' | sed -n 'n;p' | cut -d : -f 1 | rev | sort -fr | sed -n "${FT_LINE1},${FT_LINE2}p" | tr "\n" " " | sed "s/ /, /g" | sed "s/, $/./"
