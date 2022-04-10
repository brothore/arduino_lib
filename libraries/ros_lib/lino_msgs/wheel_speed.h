#ifndef _ROS_lino_msgs_wheel_speed_h
#define _ROS_lino_msgs_wheel_speed_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lino_msgs
{

  class wheel_speed : public ros::Msg
  {
    public:
      typedef float _L1_type;
      _L1_type L1;
      typedef float _L2_type;
      _L2_type L2;
      typedef float _L3_type;
      _L3_type L3;
      typedef float _R1_type;
      _R1_type R1;
      typedef float _R2_type;
      _R2_type R2;
      typedef float _R3_type;
      _R3_type R3;
      typedef float _L_SPEED_type;
      _L_SPEED_type L_SPEED;
      typedef float _R_SPEED_type;
      _R_SPEED_type R_SPEED;
      typedef float _L1_PID_type;
      _L1_PID_type L1_PID;
      typedef float _L2_PID_type;
      _L2_PID_type L2_PID;
      typedef float _L3_PID_type;
      _L3_PID_type L3_PID;
      typedef float _R1_PID_type;
      _R1_PID_type R1_PID;
      typedef float _R2_PID_type;
      _R2_PID_type R2_PID;
      typedef float _R3_PID_type;
      _R3_PID_type R3_PID;

    wheel_speed():
      L1(0),
      L2(0),
      L3(0),
      R1(0),
      R2(0),
      R3(0),
      L_SPEED(0),
      R_SPEED(0),
      L1_PID(0),
      L2_PID(0),
      L3_PID(0),
      R1_PID(0),
      R2_PID(0),
      R3_PID(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_L1;
      u_L1.real = this->L1;
      *(outbuffer + offset + 0) = (u_L1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_L1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_L1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_L1.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->L1);
      union {
        float real;
        uint32_t base;
      } u_L2;
      u_L2.real = this->L2;
      *(outbuffer + offset + 0) = (u_L2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_L2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_L2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_L2.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->L2);
      union {
        float real;
        uint32_t base;
      } u_L3;
      u_L3.real = this->L3;
      *(outbuffer + offset + 0) = (u_L3.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_L3.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_L3.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_L3.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->L3);
      union {
        float real;
        uint32_t base;
      } u_R1;
      u_R1.real = this->R1;
      *(outbuffer + offset + 0) = (u_R1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_R1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_R1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_R1.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->R1);
      union {
        float real;
        uint32_t base;
      } u_R2;
      u_R2.real = this->R2;
      *(outbuffer + offset + 0) = (u_R2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_R2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_R2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_R2.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->R2);
      union {
        float real;
        uint32_t base;
      } u_R3;
      u_R3.real = this->R3;
      *(outbuffer + offset + 0) = (u_R3.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_R3.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_R3.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_R3.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->R3);
      union {
        float real;
        uint32_t base;
      } u_L_SPEED;
      u_L_SPEED.real = this->L_SPEED;
      *(outbuffer + offset + 0) = (u_L_SPEED.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_L_SPEED.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_L_SPEED.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_L_SPEED.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->L_SPEED);
      union {
        float real;
        uint32_t base;
      } u_R_SPEED;
      u_R_SPEED.real = this->R_SPEED;
      *(outbuffer + offset + 0) = (u_R_SPEED.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_R_SPEED.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_R_SPEED.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_R_SPEED.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->R_SPEED);
      union {
        float real;
        uint32_t base;
      } u_L1_PID;
      u_L1_PID.real = this->L1_PID;
      *(outbuffer + offset + 0) = (u_L1_PID.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_L1_PID.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_L1_PID.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_L1_PID.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->L1_PID);
      union {
        float real;
        uint32_t base;
      } u_L2_PID;
      u_L2_PID.real = this->L2_PID;
      *(outbuffer + offset + 0) = (u_L2_PID.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_L2_PID.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_L2_PID.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_L2_PID.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->L2_PID);
      union {
        float real;
        uint32_t base;
      } u_L3_PID;
      u_L3_PID.real = this->L3_PID;
      *(outbuffer + offset + 0) = (u_L3_PID.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_L3_PID.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_L3_PID.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_L3_PID.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->L3_PID);
      union {
        float real;
        uint32_t base;
      } u_R1_PID;
      u_R1_PID.real = this->R1_PID;
      *(outbuffer + offset + 0) = (u_R1_PID.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_R1_PID.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_R1_PID.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_R1_PID.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->R1_PID);
      union {
        float real;
        uint32_t base;
      } u_R2_PID;
      u_R2_PID.real = this->R2_PID;
      *(outbuffer + offset + 0) = (u_R2_PID.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_R2_PID.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_R2_PID.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_R2_PID.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->R2_PID);
      union {
        float real;
        uint32_t base;
      } u_R3_PID;
      u_R3_PID.real = this->R3_PID;
      *(outbuffer + offset + 0) = (u_R3_PID.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_R3_PID.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_R3_PID.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_R3_PID.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->R3_PID);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_L1;
      u_L1.base = 0;
      u_L1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_L1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_L1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_L1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->L1 = u_L1.real;
      offset += sizeof(this->L1);
      union {
        float real;
        uint32_t base;
      } u_L2;
      u_L2.base = 0;
      u_L2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_L2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_L2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_L2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->L2 = u_L2.real;
      offset += sizeof(this->L2);
      union {
        float real;
        uint32_t base;
      } u_L3;
      u_L3.base = 0;
      u_L3.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_L3.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_L3.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_L3.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->L3 = u_L3.real;
      offset += sizeof(this->L3);
      union {
        float real;
        uint32_t base;
      } u_R1;
      u_R1.base = 0;
      u_R1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_R1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_R1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_R1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->R1 = u_R1.real;
      offset += sizeof(this->R1);
      union {
        float real;
        uint32_t base;
      } u_R2;
      u_R2.base = 0;
      u_R2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_R2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_R2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_R2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->R2 = u_R2.real;
      offset += sizeof(this->R2);
      union {
        float real;
        uint32_t base;
      } u_R3;
      u_R3.base = 0;
      u_R3.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_R3.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_R3.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_R3.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->R3 = u_R3.real;
      offset += sizeof(this->R3);
      union {
        float real;
        uint32_t base;
      } u_L_SPEED;
      u_L_SPEED.base = 0;
      u_L_SPEED.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_L_SPEED.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_L_SPEED.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_L_SPEED.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->L_SPEED = u_L_SPEED.real;
      offset += sizeof(this->L_SPEED);
      union {
        float real;
        uint32_t base;
      } u_R_SPEED;
      u_R_SPEED.base = 0;
      u_R_SPEED.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_R_SPEED.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_R_SPEED.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_R_SPEED.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->R_SPEED = u_R_SPEED.real;
      offset += sizeof(this->R_SPEED);
      union {
        float real;
        uint32_t base;
      } u_L1_PID;
      u_L1_PID.base = 0;
      u_L1_PID.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_L1_PID.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_L1_PID.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_L1_PID.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->L1_PID = u_L1_PID.real;
      offset += sizeof(this->L1_PID);
      union {
        float real;
        uint32_t base;
      } u_L2_PID;
      u_L2_PID.base = 0;
      u_L2_PID.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_L2_PID.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_L2_PID.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_L2_PID.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->L2_PID = u_L2_PID.real;
      offset += sizeof(this->L2_PID);
      union {
        float real;
        uint32_t base;
      } u_L3_PID;
      u_L3_PID.base = 0;
      u_L3_PID.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_L3_PID.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_L3_PID.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_L3_PID.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->L3_PID = u_L3_PID.real;
      offset += sizeof(this->L3_PID);
      union {
        float real;
        uint32_t base;
      } u_R1_PID;
      u_R1_PID.base = 0;
      u_R1_PID.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_R1_PID.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_R1_PID.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_R1_PID.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->R1_PID = u_R1_PID.real;
      offset += sizeof(this->R1_PID);
      union {
        float real;
        uint32_t base;
      } u_R2_PID;
      u_R2_PID.base = 0;
      u_R2_PID.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_R2_PID.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_R2_PID.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_R2_PID.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->R2_PID = u_R2_PID.real;
      offset += sizeof(this->R2_PID);
      union {
        float real;
        uint32_t base;
      } u_R3_PID;
      u_R3_PID.base = 0;
      u_R3_PID.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_R3_PID.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_R3_PID.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_R3_PID.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->R3_PID = u_R3_PID.real;
      offset += sizeof(this->R3_PID);
     return offset;
    }

    virtual const char * getType() override { return "lino_msgs/wheel_speed"; };
    virtual const char * getMD5() override { return "dcc44326156228f397c3cb547e1a862c"; };

  };

}
#endif
