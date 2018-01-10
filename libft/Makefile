# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/31 12:12:03 by tmwalo            #+#    #+#              #
#    Updated: 2018/01/10 14:11:10 by tmwalo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_putchar.c ft_putchar_fd.c ft_putstr.c ft_putstr_fd.c ft_putendl.c ft_putendl_fd.c \
      ft_striter.c ft_striteri.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
      ft_memchr.c ft_memcmp.c ft_memalloc.c ft_strlen.c ft_memdel.c ft_strnew.c ft_strdel.c \
      ft_strclr.c ft_strcmp.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_toupper.c ft_tolower.c \
      ft_strmap.c ft_strmapi.c ft_strcpy.c ft_strncpy.c ft_strdup.c ft_strcat.c ft_strncat.c \
      ft_strlcat.c ft_strchr.c ft_strrchr.c ft_atoi.c ft_strstr.c ft_isascii.c ft_isprint.c \
      ft_strnstr.c ft_strncmp.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c \
      ft_itoa.c ft_putnbr.c ft_putnbr_fd.c ft_strsplit.c ft_strtok.c free_splitstr.c \
      ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c \
      ft_stack_init_ll.c ft_stack_check_empty_ll.c ft_push_ll.c ft_pop_ll.c ft_stack_size_ll.c \
      get_next_line.c \
      llst_new.c llst_add.c llst_delone.c llst_del.c init_graph.c graph_add_edge.c \
	  st_node_new.c st_node_delone.c st_put.c st_get.c st_contains.c st_size.c \
	  ft_isnum.c ft_iscommand.c ft_iscomment.c ft_isvertex.c ft_isedge.c ft_not_empty.c \
	  init_sgraph.c \
	  read_file.c validate_graph_input.c init_validators.c validate_graph_file.c \
	  count_vertices.c find_prev_cmd_target.c graph_src_size.c sgraph_add_vertex.c \
	  sgraph_add_vertices.c sgraph_add_edge.c graph_print.c sgraph_add_all_edges.c \
	  print_edges.c adj_lsts_destroy.c graph_destroy.c print_skeys.c print_st.c \
	  sgraph_print.c st_destroy.c skeys_destroy.c sgraph_destroy.c \
	  sgraph_build.c first_token.c init_pathfinder.c path_to.c all_paths.c \
	  llst_new_empty.c path_store.c pathfinder_destroy.c llst_len.c paths_cross.c \
	  unviable_path.c unviable_paths.c path_search.c viable_paths.c paths_destroy.c \
	  store_path.c is_viable.c init_occupied.c init_ants.c move_ants.c print_ant_pos.c \
	  move_ant.c next_free_or_end.c llst_rev.c cmd_start_or_end.c validate_ants.c \
	  validate_rooms.c validate_edges.c prepare_sgraph.c llst_del_nodes.c store_all_paths.c \

OBJ = ft_putchar.o ft_putchar_fd.o ft_putstr.o ft_putstr_fd.o ft_putendl.o ft_putendl_fd.o \
      ft_striter.o ft_striteri.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o \
      ft_memchr.o ft_memcmp.o ft_memalloc.o ft_strlen.o ft_memdel.o ft_strnew.o ft_strdel.o \
      ft_strclr.o ft_strcmp.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_toupper.o ft_tolower.o \
      ft_strmap.o ft_strmapi.o ft_strcpy.o ft_strncpy.o ft_strdup.o ft_strcat.o ft_strncat.o \
      ft_strlcat.o ft_strchr.o ft_strrchr.o ft_atoi.o ft_strstr.o ft_isascii.o ft_isprint.o \
      ft_strnstr.o ft_strncmp.o ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o ft_strtrim.o \
      ft_itoa.o ft_putnbr.o ft_putnbr_fd.o ft_strsplit.o ft_strtok.o free_splitstr.o \
      ft_lstnew.o ft_lstdelone.o ft_lstdel.o ft_lstadd.o ft_lstiter.o ft_lstmap.o \
      ft_stack_init_ll.o ft_stack_check_empty_ll.o ft_push_ll.o ft_pop_ll.o ft_stack_size_ll.o \
      get_next_line.o \
      llst_new.o llst_add.o llst_delone.o llst_del.o init_graph.o graph_add_edge.o \
	  st_node_new.o st_node_delone.o st_put.o st_get.o st_contains.o st_size.o \
	  ft_isnum.o ft_iscommand.o ft_iscomment.o ft_isvertex.o ft_isedge.o ft_not_empty.o \
	  init_sgraph.o \
	  read_file.o validate_graph_input.o init_validators.o validate_graph_file.o \
	  count_vertices.o find_prev_cmd_target.o graph_src_size.o sgraph_add_vertex.o \
	  sgraph_add_vertices.o sgraph_add_edge.o graph_print.o sgraph_add_all_edges.o \
	  print_edges.o adj_lsts_destroy.o graph_destroy.o print_skeys.o print_st.o \
	  sgraph_print.o st_destroy.o skeys_destroy.o sgraph_destroy.o \
	  sgraph_build.o first_token.o init_pathfinder.o path_to.o all_paths.o \
	  llst_new_empty.o path_store.o pathfinder_destroy.o llst_len.o paths_cross.o \
	  unviable_path.o unviable_paths.o path_search.o viable_paths.o paths_destroy.o \
	  store_path.o is_viable.o init_occupied.o init_ants.o move_ants.o print_ant_pos.o \
	  move_ant.o next_free_or_end.o llst_rev.o cmd_start_or_end.o validate_ants.o \
	  validate_rooms.o validate_edges.o prepare_sgraph.o llst_del_nodes.o store_all_paths.o \

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC)
	@echo "Creating object files . . ."
	@gcc -c $(SRC) $(FLAGS)
	@echo "Creating library . . ."
	@ar rc $(NAME) $(OBJ)
	@echo "Indexing library . . ."
	@ranlib $(NAME)

create: all clean
	@mv libft.a tests/
	@echo "move library to tests/"
	@cp libft.h tests/
	@echo "copy header to tests/"

clean:
	@echo "Cleaning object files . . ."
	@/bin/rm -f $(OBJ)

fclean: clean
	@echo "Cleaning binary . . ."
	@/bin/rm -f $(NAME)

re: fclean all
