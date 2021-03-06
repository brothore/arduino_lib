#ifndef _ROS_SERVICE_Relax_h
#define _ROS_SERVICE_Relax_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace arbotix_msgs
{

static const char RELAX[] = "arbotix_msgs/Relax";

  class RelaxRequest : public ros::Msg
  {
    public:

    RelaxRequest()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
     return offset;
    }

    virtual const char * getType() override { return RELAX; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class RelaxResponse : public ros::Msg
  {
    public:

    RelaxResponse()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
     return offset;
    }

    virtual const char * getType() override { return RELAX; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class Relax {
    public:
    typedef RelaxRequest Request;
    typedef RelaxResponse Response;
  };

}
#endif
