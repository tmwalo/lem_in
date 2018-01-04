/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 12:37:41 by tmwalo            #+#    #+#             */
/*   Updated: 2018/01/03 14:43:10 by tmwalo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

# define BUFF_SIZE 4

# define NEMPTY	1
# define VERTX	2
# define EDGE	3
# define CMD	4
# define CMT	5
# define NUM	6

# define VALIDATORS 6

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

typedef struct	s_stack_ll
{
	t_list		*begin_list;
	size_t		size;
}				t_stack_ll;

typedef	struct	s_llst
{
	void			*value;
	struct s_llst	*next;
}				t_llst;

typedef struct	s_graph
{
	int			vertices;
	int			edges;
	t_llst		**adj_lsts;
}				t_graph;

typedef struct	s_st_node
{
	void		*key;
	int			size_key;
	void		*value;
	int			size_value;
}				t_st_node;

typedef	struct	s_sgraph
{
	t_llst		*st_begin;
	char		**keys;
	t_graph		*pt_graph;
	int			num_ants;
	char		*start;
	char		*end;
}				t_sgraph;

typedef struct	s_pathfinder
{
	int			*visited;
	int			*edge_to;
	t_llst		*paths;
	t_sgraph	*pt_sgraph;
}				t_pathfinder;

void			*ft_memset(void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
size_t			ft_strlen(const char *s);
char			*ft_strdup(const char *s);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strncpy(char *dest, const char *src, size_t n);
char			*ft_strcat(char *dest, const char *src);
char			*ft_strncat(char *dest, const char *src, size_t n);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strnstr(const char *big, const char *little, size_t len);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_atoi(const char *nptr);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);

void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			**ft_strsplit(char const *s, char c);
char			**ft_strtok(char const *s);
void			free_splitstr(char ***str_array);
char			*ft_itoa(int n);
void			ft_putchar(char c);
void			ft_putstr(char const *s);
void			ft_putendl(char const *s);
void			ft_putnbr(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);

t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

void			ft_stack_init_ll(t_stack_ll *stack);
int				ft_stack_check_empty_ll(t_stack_ll *stack);
int				ft_push_ll(t_stack_ll *stack, void const *content, size_t len);
t_list			*ft_pop_ll(t_stack_ll *stack);
size_t			ft_stack_size_ll(t_stack_ll *stack);

int				get_next_line(const int fd, char **line);

t_llst			*llst_new(void *value, size_t size);
void			llst_add(t_llst **alst, t_llst *new);
void			llst_delone(t_llst **alst);
void			llst_del(t_llst **alst);

int				init_graph(t_graph *graph, int vertices);
void			graph_add_edge(t_graph *pt_graph, int vertx_a, int vertx_b);

t_st_node		*st_node_new(void *key, int size_k, void *value, int size_v);
void			st_node_delone(t_st_node **alst);
void			st_put(t_llst **begin, char *key, int value);
void			*st_get(t_llst *begin, void *key);
int				st_contains(t_llst *begin, void *key);
int				st_size(t_llst *begin);

int				ft_isnum(char *str);
int				ft_iscommand(char *str);
int				ft_iscomment(char *str);
int				ft_isvertex(char *str);
int				ft_isedge(char *str);
int				ft_not_empty(char *str);

int				init_sgraph(t_sgraph *sgraph, int vertices, char *s, char *e);

t_llst			*read_file(int fd);

typedef int		(*t_graph_input)(char *);

int				validate_graph_input(char *str);
void			init_validators(t_graph_input **validator);
int				validate_graph_file(t_llst *begin_ll);
int				count_vertices(t_llst *begin_ll);
void			*find_prev_cmd_target(t_llst *begin, void *value);
int				graph_src_size(t_llst *begin_ll);
int				sgraph_add_vertex(t_sgraph *pt_sgraph, char *str);
int				sgraph_add_vertices(t_llst *file, t_sgraph *pt_sgraph);
int				sgraph_add_edge(t_sgraph *pt_sgraph, char *str);
int				sgraph_add_all_edges(t_llst *file, t_sgraph *pt_sgraph);

void			print_edges(t_graph *pt_graph);
void			graph_print(t_graph *pt_graph);

void			adj_lsts_destroy(t_graph *pt_graph);
void			graph_destroy(t_graph **dbl_pt_graph);

void			print_skeys(t_sgraph *pt_sgraph);
void			print_st(t_llst *pt_st);
void			sgraph_print(t_sgraph *pt_sgraph);

void			st_destroy(t_llst **alst);
void			skeys_destroy(t_sgraph *pt_sgraph);
void			sgraph_destroy(t_sgraph **dbl_pt_sgraph);

t_sgraph		*sgraph_build(t_llst *file);

char			*first_token(char *str);

int				init_pathfinder(t_pathfinder *pt_map, t_sgraph *pt_sgraph);
t_llst			*path_to(t_pathfinder *pt_map, int vertex);
void			all_paths(t_pathfinder *pt_map, int curr_vtx, int end);
t_llst			*llst_new_empty(void);
int				path_store(t_pathfinder *pt_map, int end);
void			pathfinder_destroy(t_pathfinder **pt_map);
int				llst_len(t_llst *begin);
int				paths_cross(void *path_x, void *path_y, int start, int end);
int				unviable_path(t_llst **begin, void *path_x, void *path_y);
t_llst			*unviable_paths(t_llst *paths, int start, int end);
int				path_search(t_llst *search_path, t_llst *paths);
void			viable_paths(t_llst **paths, int start, int end);
void			paths_destroy(t_llst **paths);
int			store_path(t_llst **all_paths, t_llst *path);
int			is_viable(t_llst *path, t_llst *unviable_paths);

#endif
