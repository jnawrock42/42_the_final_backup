# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    count_files.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/22 19:55:17 by jnawrock          #+#    #+#              #
#    Updated: 2019/10/22 20:10:05 by jnawrock         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

find . | wc -l | rev | cut -d " " -f 1 | rev
