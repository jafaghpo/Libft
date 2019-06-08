INCL_LST		=	$(INCL_PATH)/lst.h

SRCS_LST		=	ft_lstadd.c ft_lstaddlast.c ft_lstdel.c ft_lstdelone.c \
					ft_lstiter.c ft_lstmap.c ft_lstnew.c
SRC_LST			=	$(addprefix $(SRC_LST_PATH)/, $(SRCS_LST))
OBJS_LST		=	$(SRCS_LST:.c=.o)


$(OBJ_PATH)/%.o: $(SRC_LST_PATH)/%.c $(INCL_LST)
	$(CC) -o $@ -c $< -I $(INCL_PATH) $(CFLAGS)