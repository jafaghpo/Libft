# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    vec.mk                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jafaghpo <jafaghpo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/11 22:05:44 by jafaghpo          #+#    #+#              #
#    Updated: 2019/06/12 00:39:13 by jafaghpo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCL_VEC		=	$(INCL_PATH)/vec.h

SRCS_VEC		=	vec_new.c vec_delete.c vec_clear.c
SRC_VEC			=	$(addprefix $(SRC_VEC_PATH)/, $(SRCS_VEC))
OBJS_VEC		=	$(SRCS_VEC:.c=.o)


$(OBJ_PATH)/%.o: $(SRC_VEC_PATH)/%.c $(INCL_VEC)
	$(CC) -o $@ -c $< -I $(INCL_PATH) $(CFLAGS)