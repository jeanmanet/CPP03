# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/06 11:50:09 by jmanet            #+#    #+#              #
#    Updated: 2023/04/06 19:01:07 by jmanet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scavtrap

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = ${wildcard *.cpp}

OBJS = ${SRCS:.cpp=.o}

HEADERS = ${wildcard *.hpp}

CC = g++

all : ${NAME}

${NAME} : ${OBJS} ${HEADERS}
	${CC} ${FLAGS} ${SRCS} -o ${NAME}

debug : ${OBJS} ${HEADERS}
	${CC} ${FLAGS} -g ${SRCS} -o ${NAME}

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all
