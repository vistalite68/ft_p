#ifndef CMD_GET_H
# define CMD_GET_H

# include "get_param.h"
# include "shared_struct.h"
# include "str_utils.h"
# include "send_data.h"
# include "recv_data.h"
# include "client_struct.h"

# include <libft.h>

# include <stdio.h>
# include <stdint.h>

int			cmd_get(int sockfd, char *line, uint32_t cmd, t_param *param);

#endif
