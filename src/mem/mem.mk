INCL_MEM		=	$(INCL_PATH)/mem.h

SRCS_MEM		=	ft_bzero.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
					ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_nbbits.c \
					ft_realloc.c
SRC_MEM			=	$(addprefix $(SRC_MEM_PATH)/, $(SRCS_MEM))
OBJS_MEM		=	$(SRCS_MEM:.c=.o)


$(OBJ_PATH)/%.o: $(SRC_MEM_PATH)/%.c $(INCL_MEM)
	$(CC) -o $@ -c $< -I $(INCL_PATH) $(CFLAGS)