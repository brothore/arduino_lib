#ifndef _ROS_lino_msgs_car_param_h
#define _ROS_lino_msgs_car_param_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lino_msgs
{

  class car_param : public ros::Msg
  {
    public:
      typedef float _R_wheel_type;
      _R_wheel_type R_wheel;
      typedef float _W_car_type;
      _W_car_type W_car;
      typedef float _L_car_type;
      _L_car_type L_car;
      typedef float _Reset_car_type;
      _Reset_car_type Reset_car;

    car_param():
      R_wheel(0),
      W_car(0),
      L_car(0),
      Reset_car(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_R_wheel;
      u_R_wheel.real = this->R_wheel;
      *(outbuffer + offset + 0) = (u_R_wheel.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_R_wheel.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_R_wheel.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_R_wheel.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->R_wheel);
      union {
        float real;
        uint32_t base;
      } u_W_car;
      u_W_car.real = this->W_car;
      *(outbuffer + offset + 0) = (u_W_car.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_W_car.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_W_car.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_W_car.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->W_car);
      union {
        float real;
        uint32_t base;
      } u_L_car;
      u_L_car.real = this->L_car;
      *(outbuffer + offset + 0) = (u_L_car.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_L_car.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_L_car.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_L_car.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->L_car);
      union {
        float real;
        uint32_t base;
      } u_Reset_car;
      u_Reset_car.real = this->Reset_car;
      *(outbuffer + offset + 0) = (u_Reset_car.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_Reset_car.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_Reset_car.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_Reset_car.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->Reset_car);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_R_wheel;
      u_R_wheel.base = 0;
      u_R_wheel.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_R_wheel.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_R_wheel.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_R_wheel.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->R_wheel = u_R_wheel.real;
      offset += sizeof(this->R_wheel);
      union {
        float real;
        uint32_t base;
      } u_W_car;
      u_W_car.base = 0;
      u_W_car.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_W_car.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_W_car.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_W_car.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->W_car = u_W_car.real;
      offset += sizeof(this->W_car);
      union {
        float real;
        uint32_t base;
      } u_L_car;
      u_L_car.base = 0;
      u_L_car.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_L_car.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_L_car.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_L_car.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->L_car = u_L_car.real;
      offset += sizeof(this->L_car);
      union {
        float real;
        uint32_t base;
      } u_Reset_car;
      u_Reset_car.base = 0;
      u_Reset_car.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_Reset_car.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_Reset_car.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_Reset_car.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->Reset_car = u_Reset_car.real;
      offset += sizeof(this->Reset_car);
     return offset;
    }

    virtual const char * getType() override { return "lino_msgs/car_param"; };
    virtual const char * getMD5() override { return "71265fe5412a6ab64209f231f18d49fc"; };

  };

}
#endif
