# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAC.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/22 20:53:59 by jnawrock          #+#    #+#              #
#    Updated: 2019/10/22 20:55:28 by jnawrock         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifconfig | grep -w "ether" | cut -d " " -f 2
