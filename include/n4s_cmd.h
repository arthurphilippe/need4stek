/*
** n4s.h for n4s in /home/arthur/Projects/CPE_2016_n4s/include/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Wed May  3 11:36:03 2017 Arthur Philippe
** Last update Wed May  3 12:01:37 2017 Arthur Philippe
*/

#ifndef N4S_H_
# define N4S_H_

# define CMD_START	"START_SIMULATION"
# define CMD_STOP	"STOP_SIMULATION"
# define CMD_FWD	"CAR_FORWARD"
# define CMD_BWD	"CAR_BACKWARDS"
# define CMD_STEER	"WHEELS_DIR"
# define CMD_GET_LIDAR	"GET_INFO_LIDAR"
# define CMD_GET_SPEED	"GET_CURRENT_SPEED"
# define CMD_GET_STEER	"GET_CURRENT_WHEELS"
# define CMD_WAIT	"CYCLE_WAIT"
# define CMD_GET_MSPEED	"GET_CAR_SPEED_MAX"
# define CMD_GET_LSPEED	"GET_CAR_SPEED_MIN"
# define CMD_GET_SIM_T	"GET_INFO_SIMTIME"

# define TYPE_NONE	0
# define TYPE_U_FLOAT	1
# define TYPE_S_FLOAT	2
# define TYPE_INT	3

# define VAL_START	TYPE_NONE
# define VAL_STOP	TYPE_NONE
# define VAL_FWD	TYPE_U_FLOAT
# define VAL_BWD	TYPE_U_FLOAT
# define VAL_STEER	TYPE_S_FLOAT
# define VAL_GET_LIDAR	TYPE_NONE
# define VAL_GET_SPEED	TYPE_NONE
# define VAL_GET_STEER	TYPE_NONE
# define VAL_WAIT	TYPE_INT
# define VAL_GET_MSPEED	TYPE_NONE
# define VAL_GET_LSPEED	TYPE_NONE
# define VAL_GET_SIM_T	TYPE_NONE

# define ASW_START	1
# define ASW_STOP	1
# define ASW_FWD	1
# define ASW_BWD	1
# define ASW_STEER	1
# define ASW_GET_LIDAR	2
# define ASW_GET_SPEED	3
# define ASW_GET_STEER	3
# define ASW_WAIT	1
# define ASW_GET_MSPEED	3
# define ASW_GET_LSPEED	3
# define ASW_GET_SIM_T	4

typedef struct	s_cmd_n4s
{
  char		*cmd_line;
  int		f_type;
  int		f_aws;
}		t_cmd_n4s;

#endif /* !N4S_H_ */
